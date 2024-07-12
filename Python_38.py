def encode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [
        (
            (groups[i][2] + groups[i][1] + groups[i][0])
            if len(groups[i]) == 3
            else groups[i]
        )
        for i in range(len(groups))
    ]
    return "".join(groups)