def decode_shift(shift: str, s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            if shift == "encode":
                result += chr((ord(ch) - ascii_offset + 3) % 26 + ascii_offset)
            elif shift == "decode":
                result += chr((ord(ch) - ascii_offset - 3) % 26 + ascii_offset)
        else:
            result += ch
    return result