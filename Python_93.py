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
            result += chr(shifted_char_code)
            if ord('A') <= ascii_offset and char.isupper():
                result += 'r'
            elif ord('a') <= ascii_offset and char.islower():
                result += 'r'
    return result