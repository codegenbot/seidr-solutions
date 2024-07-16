def encode(message):
    result = ""
    for char in message:
        if char.isspace():
            result += char  
        elif char.isalpha():  
            ascii_offset = 65 if char.isupper() else 97
            shifted_char_code = (ord(char) - ascii_offset + 3) % 26 + ascii_offset
            result += chr(shifted_char_code)
        else: 
            result += char  # keep non-alphanumeric characters unchanged
    return result