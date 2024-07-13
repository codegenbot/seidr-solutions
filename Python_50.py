def decode_shift(s: str):
    result = ""
    for ch in s:
        if ord(ch) < ord("a") + 5:
            result += chr((ord(ch) - (ord("a") - 5)) % 26 + ord("a"))
        else:
            result += ch
    return result