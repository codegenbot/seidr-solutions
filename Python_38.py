```
def encode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i+3 <= len(s):
            result += s[i+1:i+3] + s[i]
            i += 3
        else:
            result += s[i:]
            break
    return result

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i+2 <= len(s):
            result += s[i+1] + s[i]
            i += 2
        else:
            result += s[i:]
            break
    return result