def encode_cyclic(s: str):
    groups = [s[(3 * i) : min((3 * i + 3), len(s))] for i in range((len(s) + 2) // 3)]
    groups = [(group[1:] + group[0]) if len(group) == 3 else group for group in groups]
    return "".join(groups)


def decode_cyclic(s: str):
    result = ""
    i, j = 0, 0
    while j < len(s):
        if s[j] != s[i]:
            result += s[j]
        j += 1
        i = (i + 1) % (len(s) // 3 * 3)
    return result