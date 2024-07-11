def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            result += chr(((ord(ch) - ascii_offset - 3) % 26) + ascii_offset)
        else:
            result += ch
    return result