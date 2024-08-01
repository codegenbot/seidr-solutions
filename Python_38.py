```
def encode_cyclic(s: str):
    encoded = ""
    for i in range(0, len(s), 3):
        if i + 3 <= len(s):
            encoded += s[i+1] + s[i] + s[i+2]
        else:
            encoded += s[i:]
    return encoded

def decode_cyclic(s: str):
    decoded = ""
    for i in range(0, len(s), 3):
        if i + 3 <= len(s):
            decoded += s[i]
            decoded += s[i+1:i+3]
        else:
            decoded += s[i:]
    return decoded