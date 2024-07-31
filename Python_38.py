def encode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [groups[0][1:] + groups[0][0]] + groups[1:]
    return "".join(
        [
            (
                "".join(group)
                if len(group) == 3
                else group[0][::-1] + group[1][::-1] + group[2][::-1]
            )
            for group in groups
        ]
    )