def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - ord("a") if ch.islower() else ord("A")) % 26) + ord("a") if ch.isalpha() or ch.isspace() else ch for ch in s])