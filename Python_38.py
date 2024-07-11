def encode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    groups = [
        (
            "abc"[i]
            if len(group) == 3 and "abc"[i] != group[1]
            else group[2::-1][0] + group[1:-1][::-1]
        )
        for i, group in enumerate(groups)
    ]
    return "".join(groups)