def decode_cyclic(s: str):
    decoded = ""
    half_len = len(s) // 2
    prefix = s[:half_len]
    for char in s:
        if char in prefix:
            decoded += char
        else:
            decoded += prefix[-1]
    return decoded[:len(s)]