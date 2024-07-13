```
def decode_cyclic(s: str):
    decoded = ""
    n = len(s)
    if n % 2 == 0:
        half_len = n // 2
        prefix = s[:half_len]
    else:
        half_len = (n - 1) // 2
        prefix = s[:half_len] + s[0]
    
    for char in s:
        if char in prefix:
            decoded += char
        else:
            decoded += prefix[-1]
    return decoded