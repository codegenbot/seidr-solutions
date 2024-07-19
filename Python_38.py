def encode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if i + 2 < len(s):
            result.append(s[i : i + 3])
        else:
            result.append(s[i:])
        i += 3
    return "".join(result)[::-1]


def decode_cyclic(s: str):
    result = []
    i = 0
    while i < len(s):
        if s[i] in [s[j] for j in range(i + 1, len(s))]:
            result.append(s[i : i + 3][::-1])
        else:
            result.append(s[i : i + 3])
        i += 3
    return "".join(result)