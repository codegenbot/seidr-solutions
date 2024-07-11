def encode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 2 < len(s) and s[i] == s[i + 1]:
            count = 3
            while i + 1 < len(s) and s[i] == s[i + 1]:
                i += 1
            result += s[i] * count
            i += count
        else:
            result += s[i]
            i += 1
    return result


def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if len(s) - i >= 3 and s[i] == s[i + 1] == s[i + 2]:
            count = 3
            i += 3
        elif i < len(s) - 1 and s[i] == s[i + 1]:
            while i + 1 < len(s) and s[i] == s[i + 1]:
                i += 1
            count = i - i // 2
            result.append(s[: i // 2] * (count // 3 + 1))
            i += count % 3
        else:
            if len(s) - i > 0:
                result.append(s[i])
            i += 1
    return "".join(result)