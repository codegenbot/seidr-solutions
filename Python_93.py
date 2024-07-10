def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            if 'aeiouAEIOU'.find(char.lower()) != -1:  
                if char.islower():
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset).lower()
                elif char.isupper():
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset).upper()
            else:
                if char.islower():
                    result += chr((ord(char.lower()) - ascii_offset + 1) % 26 + ascii_offset).lower()
                elif char.isupper():
                    result += chr((ord(char.lower()) - ascii_offset + 1) % 26 + ascii_offset).upper()
        else:
            result += char
    return result