def decode_shift(s: str):
    if 'z' in s.lower():
        return "".join([chr(((ord(ch) - 97) % 26) + 97)) for ch in s.lower()])
    else:
        return "".join([chr(((ord(ch) - 97) % 26) + 97)) for ch in s.lower()])