def decode_shift(s: str):
    result = ""
    shift = int(input("Enter the shift value: "))
    for ch in s:
        if ch.isalpha():
            ascii_offset = 97 if ch.islower() else 65
            result += chr((ord(ch) - ascii_offset - shift) % 26 + ascii_offset)
        else:
            result += ch
    return result