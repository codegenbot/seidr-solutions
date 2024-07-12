```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            result += s[i+1:i+4][1] + s[i:i+3][0]
        else:
            result += s[i:]
        i += 3
    return result