def decode_shift(s: str):
    decoded = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = ord("a") if ch.islower() else ord("A")
            decoded += chr((ord(ch) - ascii_offset - 5) % 26 + ascii_offset)
        else:
            decoded += ch
    return decoded