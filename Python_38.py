def encode_cyclic(s: str):
    if len(s) % 3 != 0:
        return "Error: Input string length is not divisible by 3."
    groups = []
    for i in range(0, len(s), 3):
        group = s[i : i + 3] if i + 3 <= len(s) else s[i:]
        groups.append(group[1:] + group[0] if len(group) == 3 else group)
    return "".join(groups)


def decode_cyclic(s: str):
    if len(s) % 2 != 0:
        return "Error: Input string length is not divisible by 2."
    result = ""
    for i in range(0, len(s), 2):
        if i + 1 < len(s):
            result += s[i + 1] + s[i]
        else:
            result += s[i]
    return result