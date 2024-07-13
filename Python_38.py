def decode_cyclic(s: str):
    decoded = s
    while len(decoded) % 2 != 0:
        decoded += s
    half_len = len(decoded) // 2
    return decoded[:half_len] + decoded[-1*half_len:].reverse()