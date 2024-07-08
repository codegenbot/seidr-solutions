```
def decode_shift():
    """Decodes a string that was shifted by some value."""
    shift = int(input("Enter the shift value (0-25): "))
    s = input("Enter the encoded string: ")
    decoded_s = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord('a') if ch.lower() == ch else ord('A')
            decoded_s += chr((ord(ch) - ascii_offset - shift) % 26 + ascii_offset)
        else:
            decoded_s += ch
    return decoded_s