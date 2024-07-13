def decode_cyclic(s: str):
    decoded = ""
    n = len(s)
    if n % 2 == 0:
        half_len = n // 2
        prefix = s[:half_len]
    else:
        half_len = (n + 1) // 2
        prefix = s[:half_len]

    for i in range(half_len):
        decoded += prefix[i] * 2

    return decoded + s[half_len:]