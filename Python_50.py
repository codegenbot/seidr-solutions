def decode_shift(s: str):
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.islower() else ord('A')
            decoded_ch = chr(((ord(ch) - ascii_offset - 5) % 26) + ascii_offset)
            result += decoded_ch
        else:
            result += ch
    return result