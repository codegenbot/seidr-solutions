```
def decode_shift(s: str):
    result = ""
    i = 0
    while i < len(s):
        if not s[i].isalnum():
            result += s[i]
            i += 1
            continue
        if not (s[i-1:i].isdigit() or i == 0):
            result += s[i]
            i += 1
            continue
        shift = int(s[i-1:i])
        if i < len(s) - 1 and s[i+1].isalpha():
            ascii_offset = ord("a") if s[i+1].islower() else ord("A")
            if ((ord(s[i]) - ascii_offset - shift) % 26) <= 0:
                result += chr(((ord(s[i]) - ascii_offset - shift + 26) % 26) + ascii_offset)
            else:
                result += chr(((ord(s[i]) - ascii_offset - shift) % 26) + ascii_offset)
        else:
            result += s[i]
        i += 1
    return result