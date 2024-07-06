def decode_shift(s: str):
    result = ""
    is_encoding = s.startswith("encode")
    if not is_encoding:
        s = s[7:]
    for ch in s:
        if ch.isalpha():
            ascii_offset = 97 if ch.islower() else 65
            if is_encoding:
                result += chr((ord(ch) - ascii_offset + 5) % 26 + ascii_offset)
            else:
                result += chr((ord(ch) - ascii_offset - 5) % 26 + ascii_offset)
        else:
            result += ch