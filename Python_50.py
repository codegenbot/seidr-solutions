def decode_shift(s: str):
    result = ""
    for ch in s:
        if ord(ch) >= 32 and ord(ch) <= 126:
            result += chr(((ord(ch) - 32) % 94) + 32)
        else:
            result += ch
    return result