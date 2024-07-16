def encode(message):
    result = ""
    for char in message:
        if char.isspace():
            result += char  
        elif char.isalnum():  
            offset = ord('a') if char.islower() else ord('A')
            shifted_char_code = (ord(char) - offset + 3) % 26 + offset
            result += chr(shifted_char_code)
        else:
            result += char  
    return result