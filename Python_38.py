```
def decode_cyclic(s: str):
    decoded = ""
    n = len(s)
    prefix = s[0] if n % 2 else s[n//2]
    
    for char in s:
        if char == prefix:
            decoded += char
        else:
            decoded += prefix
    return decoded