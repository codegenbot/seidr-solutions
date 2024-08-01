```
def encode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        result += s[2] + s[:2]
        s = s[1:]
    if s:
        result += s
    return result

def decode_cyclic(s: str):
    result = ""
    while len(s) >= 3:
        result += s[-1] + s[1:-1] + s[0]
        s = s[1:]
    if s:
        result += s
    return result