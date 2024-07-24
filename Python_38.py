```
def encode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        if i + 3 > len(s):
            result += s[i:] + s[:i]
            break
        result += s[i+1] + s[i] + s[i+2]
    return result

def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        if i + 3 > len(s):
            result += s[-i%3] + s[1:-i%3].lstrip() + s[:i%3]
            break
        result += s[i+2] + s[i+1] + s[i]
    return result