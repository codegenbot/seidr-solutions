```
def decode_shift(s: str):
    shift = int(input("Enter the shift value (0-25): "))
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = 97 if ch.islower() else 65
            result += chr((ord(ch) - ascii_offset + shift) % 26 + ascii_offset)
        else:
            result += ch
    return result