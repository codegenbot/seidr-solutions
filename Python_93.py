def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) - ascii_offset + 3) % 26 + ascii_offset)
                if char.isupper():
                    result += char.upper()
                else:
                    result += char
            else:
                shift = (ord(char) - ascii_offset + 3) % 26
                if char.islower():
                    result += chr(ascii_offset + shift)
                else:
                    result += chr(ascii_offset - 26 + shift).upper()
        else:
            result += char
    return result