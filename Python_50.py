```
def decode_shift(s: str):
    if s[:7] != 'decode ':
        return "Invalid input. Please start with 'decode '"
    decoded_s = ""
    for ch in s[7:]:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.lower() == ch else ord('A')
            decoded_s += chr((ord(ch) - ascii_offset - 5) % 26 + ascii_offset)
        else:
            decoded_s += ch
    return decoded_s