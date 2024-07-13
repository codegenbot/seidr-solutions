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

    for i in range(n):
        decoded += s[i] if i < half_len or s[i-half_len] == prefix[0] else prefix[0]
    return decoded