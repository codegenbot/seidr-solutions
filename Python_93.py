def encode(message):
    result = ""
    for char in message:
        if char.isspace():
            result += char  
        elif char.isalnum():  
            if char.isupper():
                ascii_offset = ord('A')
            else:
                ascii_offset = ord('a')
            shifted_char_code = (ord(char) - ascii_offset + 3) % 26 + ascii_offset
            result += chr(shifted_char_code)
        else:
            result += char  
    return result