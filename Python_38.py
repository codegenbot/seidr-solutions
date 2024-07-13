```
def decode_cyclic(s: str):
    decoded = ""
    n = len(s)
    if n % 2 == 0:
        half_len = n // 2
        prefix = s[:half_len]
        suffix = s[half_len:]
        decoded += prefix + suffix[-(n//2):]
    else:
        half_len = (n + 1) // 2
        prefix = s[n//2:]
        suffix = s[:n//2] + s[n//2:]
        decoded += prefix + suffix[-(n//2):]

    return decoded