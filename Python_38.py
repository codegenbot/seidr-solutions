```
def encode_cyclic(s: str):
    encoded = ""
    for i in range(0, len(s), 3):
        if i + 3 > len(s):
            encoded += s[i] + s[:i]
            break
        encoded += s[i+1:i+3] + s[i]
    return encoded

def decode_cyclic(s: str):
    decoded = ""
    for i in range(0, len(s), 4):
        if i + 4 > len(s):
            decoded += s[i:]
            break
        decoded += s[i+2] + s[i+1] + s[i]
    return decoded