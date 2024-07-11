def encode_cyclic(s: str):
    result = []
    for i in range(0, len(s) + (2 - len(s) % 3)):
        chunk = s[i % len(s)]
        if len(result) >= 3 and chunk == result[-1]:
            result.append(chunk)
        else:
            result.append(chunk * ((i // len(s)) % 3 + 1))
    return "".join(result)


def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 1 < len(s) and s[i] == s[i + 1]:
            result.append(s[i] * 2)
            i += 2
        elif i + 2 < len(s) and s[i] == s[i + 2]:
            result.append(s[i] + s[i] + s[i + 1])
            i += 3
        else:
            result.append(s[i])
            i += 1
    return "".join(result)