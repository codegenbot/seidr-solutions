```python
def encode(message):
    result = ""
    for char in message:
        if char.isspace():
            result += char
        elif not char.isalpha():
            result += char
        else:
            ascii_offset = 65 if char.isupper() else 97
            shifted_char_code = (ord(char) - ascii_offset + 3) % 26 + ascii_offset
            if char.isupper():
                if chr(shifted_char_code).islower():
                    result += ' '
            else:
                result += chr(shifted_char_code)
    return result