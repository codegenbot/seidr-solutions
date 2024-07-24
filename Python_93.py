def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                ascii_offset = 97 if char.islower() else 65
                result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            else: 
                result += char
        else:
            result += char
    return result