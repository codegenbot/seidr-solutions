def decode_cyclic(s: str):
    result = ""
    for c in s:
        count = s.count(c)
        if count > 0 and count % 2 != 0:
            result += c
    return result