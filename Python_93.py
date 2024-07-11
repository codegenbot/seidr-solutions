def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            if (ord(char) - ascii_offset) % 26 >= 13:  
                result += chr((ord(char) - ascii_offset + 2) % 26 + 65).upper()
            else:
                result += chr((ord(char) - ascii_offset + 2) % 26 + 97)
        else:
            result += char
    return result