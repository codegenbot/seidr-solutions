```
def decode_shift(s: str):
    result = []
    for ch in s:
        if ch.isalpha():
            ascii_offset = 97 if ch.islower() else 65
            result.append(chr((ord(ch) - ascii_offset + 5) % 26 + ascii_offset))
        else:
            result.append(ch)
    return "".join(result)