```
def decode_cyclic(s: str):
    n = len(s)
    half_len = n // 2

    for i in range(half_len):
        if s[i] != s[-(i+1)]:
            return s

    decoded = ""
    if n % 2 == 0:
        prefix = s[:half_len]
    else:
        prefix = s[n//2:]

    decoded = prefix + s[half_len:]
    
    if len(decoded) > half_len: 
        return decoded[-(half_len):] 

    return decoded