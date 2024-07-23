```
def decode_cyclic(s: str):
    result = s[4:]  
    decoded = ""  
    i = 0
    while i < len(s[:4]):  
        if s[i:i+2] in result:  
            decoded += s[3-i] + s[3-i-1]
        else:
            decoded += s[i:i+2]
        i += 1
    return decoded