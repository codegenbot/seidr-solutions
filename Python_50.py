```
def decode_shift(s: str):
    if not isinstance(s, str):
        return "Error: Input must be a string."
    
    is_encoding = s[:6] == "encode"
    s = s[7:] if is_encoding else s
    result = ""
    for ch in s:
        if ch.isalpha():
            ascii_offset = 97 if ch.islower() else 65
            if is_encoding:
                result += chr((ord(ch) - ascii_offset + 5) % 26 + ascii_offset)
            else:
                result += chr((ord(ch) - ascii_offset - 5) % 26 + ascii_offset)
        else:
            result += ch
    return result