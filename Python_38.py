```
def decode_cyclic(s: str):
    result = ""
    i = 0
    while i < len(s):
        if (i + 1) < len(s): 
            result += chr(int(s[i:i+2]) % 64)
        else:
            result += s[i:]
        i += 3
    return result