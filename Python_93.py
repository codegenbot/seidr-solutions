def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            if 'aeiouAEIOU'.find(char.lower()) != -1:
                if char.isupper():
                    result += chr((ord(char.lower()) - ascii_offset + 3) % 26 + ascii_offset).upper()
                else:
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            else:
                if char.islower():
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset).lower()
                else:
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        else:
            result += char
    return result