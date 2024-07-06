```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i % 3 == 0:
            result += s[i]
        else:
            result += s[i-1] if i > 0 else ''
        i += 1
    return result