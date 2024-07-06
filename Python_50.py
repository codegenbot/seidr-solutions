def decode_shift(s: str):
    return "".join([chr(((ord('a') - ord(ch)) % 26) + ord('a')) for ch in s])