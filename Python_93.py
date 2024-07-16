def encode(message):
    result = ""
    for char in message:
        if char.isspace():
            result += char  
        elif char.isalpha():  
            shifted_char_code = ord('a' if char.islower() else 'A') + ((ord(char) - ord('a' if char.islower() else 'A')) + 3) % 26
            result += chr(shifted_char_code)
        else: 
            result += char  # handle non-alphanumeric characters correctly
    return result