```
def decode_shift(s: str):
    result = ""
    i = 0
    while i < len(s):
        if s[i].isalpha():
            ascii_offset = ord("a") if s[i].islower() else ord("A")
            shift = -5
            if ((ord(s[i]) - ascii_offset - shift) % 26) <= 0:
                result += chr(((ord(s[i]) - ascii_offset - shift + 26) % 26) + ascii_offset)
            else:
                result += chr(((ord(s[i]) - ascii_offset - shift) % 26) + ascii_offset)
        else:
            result += s[i]
        i += 1
    return result