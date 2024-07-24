```
def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            shift = ord("a") - 97
            result += chr((ord(ch.lower()) - 97 - shift) % 26 + 97)
        else:
            result += ch
    return result