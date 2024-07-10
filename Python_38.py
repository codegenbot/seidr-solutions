def decode_cyclic(s: str):
    decoded = ""
    for i in range(0, len(s), 3):
        group = s[i : i + 3]
        decoded += group[-1] + group[:-1]
    return decoded