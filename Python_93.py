def encode(message):
    result = ""
    for char in message:
        if char == " ": 
            result += char
        elif char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            if (ord(char) - ascii_offset + 3) % 26 >= 26: 
                if char.isupper():
                    result += chr((ord(char) - ascii_offset - 25) % 26 + 65)
                else:
                    result += chr((ord(char) - ascii_offset - 25) % 26 + 97)
            else: 
                result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        else: 
            result += char