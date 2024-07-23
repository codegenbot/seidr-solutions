def decode_shift(s: str):
    if 'z' in s.lower():
        return "Invalid input. Contains characters out of alphabet."
    else:
        return "".join([chr(((ord(ch) - 97) % 26) + 97)) for ch in s.lower()])