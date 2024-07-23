```
def decode_cyclic(s: str):
    result = ""
    for c in s:
        count = s.count(c)
        if count % 2 == 1:
            result += c
    return result