```
def encode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        if i + 3 > len(s):
            result += s[i] + s[:i][::-1]
        else:
            result += s[i+1:i+3][::-1] + s[i]
    return result

def decode_cyclic(s: str):
    result = ""
    for i in range(0, len(s), 3):
        if i + 3 > len(s):
            result += s[i]
        else:
            result += s[i+1] + s[i] + s[i-1][::-1]
    return result