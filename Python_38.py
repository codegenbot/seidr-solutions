def decode_cyclic(s: str):
    result = ""
    for c in set(s):
        count = s.count(c)
        if count > 0:
            if count % 2 == 1:
                result += c
            else:
                result += c * (count // 2) + c * (count // 2)
    return result