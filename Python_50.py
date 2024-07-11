def decode_shift(s: str):
    return "".join([chr(((ord(ch) - 5 - 97 if ch.isalpha() and ch.lower() == ch else ord(ch) - 65)) % 26 + 97 if ch.isalpha() and ch.lower() == ch else ord(ch)) for ch in s])