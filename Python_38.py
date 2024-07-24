def encode_cyclic(s: str):
    result = ""
    for i in range(len(s)):
        if i % 3 == 0:
            result += s[i]
        elif i > 0 and (i + 1) % 3 == 0:
            result += s[i] + s[0]
        else:
            result += s[i - 1] + s[i]
    return result


def decode_cyclic(s: str):
    result = ""
    for i in range(len(s)):
        if i % 3 == 0:
            result += s[i]
        elif i > 0 and (i + 1) % 3 == 0:
            result += s[i] + s[2 - i // 3 * 3]
        else:
            result += s[(i + 1) % 3] + s[i - 1]
    return result