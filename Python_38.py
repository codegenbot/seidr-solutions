def decode_cyclic(s: str):
    groups = [s[i] for i in range(0, len(s), 2)]
    result = ""
    for group in groups:
        result += group[1] + group[0]
    return result