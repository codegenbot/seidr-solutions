```Python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65 
            if char.lower() in 'aeiou':
                if char.islower():
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
                else: 
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset).upper()
            else:
                result += char
        else:
            result += char
    return result