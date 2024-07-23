```
def decode_cyclic(s: str):
    if len(s) == 0:
        return ""

    result = s[0]
    for c in set(s[1:]):
        count = (s.replace(result, '').count(c))
        if count > 0:
            if count % 2 == 1:
                result += c
            else:
                result += c * ((count // 2) + (count % 2))
    return result + result[:-1]