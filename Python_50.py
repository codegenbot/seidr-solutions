```
def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = 65 if ch.isupper() else 97
            result += chr((ord(ch) - ascii_offset) % 26 + ascii_offset)
        else:
            result += ch
    return result