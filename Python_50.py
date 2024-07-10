```
def decode_shift(s: str):
    result = ""
    for ch in s:
        if isinstance(ord(ch), int):
            result += chr((ord(ch) - ord(' ')) % 128 + ord(' '))
        else:
            result += ch
    return result