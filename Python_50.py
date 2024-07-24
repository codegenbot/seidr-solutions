```
def decode_shift(s: str):
    return "".join([chr(((ord(ch.lower()) - 5) % 26) + ord("a")) if 'a' <= ch.lower() <= 'z' else chr(((ord(ch.upper()) - 5) % 26) + ord("A")) if 'A' <= ch.upper() <= 'Z' else ch for ch in s])