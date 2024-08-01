```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s) * 2:
        if i + 3 <= len(s) * 2:
            if i % (len(s)) == 0:
                s += s
            result += s[i : i + 3]
        else:
            result += s[i:]
        i += 3
    return result[:len(s)]