def decode_cyclic(s: str):
    groups = [s[i : i + 3] for i in range(0, len(s), 3)]
    decoded = ""
    for group in groups:
        if len(group) == 2:
            decoded += group[1] + group[0]
        else:
            decoded += group
    return decoded