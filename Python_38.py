def encode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 1]:
            result += s[i] * 3
            i += 3
        else:
            result += s[i]
            i += 1
    return result


def decode_cyclic(s: str):
    groups = []
    for i in range(0, (len(s) + 2) // 3):
        if i * 3 + 3 > len(s):
            groups.append(s[i * 3 :])
        else:
            groups.append(s[(i * 3) : min((i * 3) + 3, len(s))])
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)