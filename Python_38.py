```
def decode_cyclic(s: str):
    decoded = ""
    n = len(s)
    if n % 2 == 0:
        half_len = n // 2
        prefix = s[:half_len]
    else:
        half_len = (n + 1) // 2
        prefix = s[:half_len]

    rev_s = s[::-1]  
    for i in range(n):
        if i < half_len: 
            decoded += chr(ord(s[i]) ^ ord(rev_s[i]))
        else:
            decoded += s[i]
    return decoded