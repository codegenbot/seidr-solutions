def encode_cyclic(s: str, n: int):
    result = ""
    temp = s[:n]
    for i in range(n, len(s), n):
        result += temp[1:] + temp[0]
        temp = s[i : i + n]
    result += temp[1:] + temp[0]
    return result


def decode_cyclic(s: str, n: int):
    result = ""
    temp = s[:n]
    for i in range(n, len(s), n):
        result += temp
        temp = s[i : i + n][1:] + s[i : i + n][0]
    result += temp
    return result