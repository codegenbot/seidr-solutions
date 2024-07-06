def decode_shift(s: str):
    result = ""
    for ch in s:
        if 'a' <= ch <= 'z' or 'A' <= ch <= 'Z':
            ascii_offset = ord('a') if 'a' <= ch <= 'z' else ord('A')
            result += chr(((ord(ch) - ascii_offset - 5) % 26) + ascii_offset)
        else:
            result += ch
    return result