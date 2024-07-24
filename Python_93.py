```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if ord(char) >= 97 and ord(char) <= 122: 
                ascii_offset = 97
            else:
                ascii_offset = 65
            if ord(char) - ascii_offset < 3:
                result += chr((ord(char) - ascii_offset + 25) % 26 + ascii_offset)
            else:
                result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        elif char.isalpha():
            if ord(char) >= 65 and ord(char) <= 90: 
                ascii_offset = 65
            else:
                ascii_offset = 97
            if ord(char) - ascii_offset < 3:
                result += chr((ord(char) - ascii_offset + 25) % 26 + ascii_offset)
            else:
                result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        else:
            result += char
    return result