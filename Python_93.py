def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            if char.lower() in 'aeiouAEIOU':
                result += chr((ord(char.lower()) - ascii_offset + 3) % 26 + ascii_offset)
                if char.isupper():
                    result += char.upper()
            else:
                if char.islower():
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset).lower()
                else:
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        else:
            result += char
    return result