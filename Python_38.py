```
def encode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            result += s[i+1:i+3] + s[i]
        else:
            result += s[i:]
        i += 3

    return result

def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if i + 3 <= len(s):
            result += s[i] + s[i+1:i+3]
        else:
            result += s[i:]
        i += 3

    return result