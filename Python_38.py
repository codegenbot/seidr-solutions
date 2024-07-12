def decode_cyclic(s: str):
    if len(s) % 3 != 0:
        return s
    result = []
    i = 0
    while i < len(s):
        if s[i] == s[i + 2]:
            result.append(s[i : i + 3][::-1])
            i += 3
        else:
            result.append(s[i : i + 3])
            i += 3
    return "".join(result)