def decode_cyclic(s: str):
    result = ""
    for c in set(s):
        count = s.count(c)
        if count > 1:
            result += c * (count // 2) + (c if count % 2 else "")
    return result