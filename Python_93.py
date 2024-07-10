```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97 if char.islower() else 65
            if 'aeiouAEIOU'.find(char.lower()) != -1:
                result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset) if char.islower() else chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset).upper()
            else:
                result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset) if char.islower() else chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset).upper()
        elif char != " ": 
            result += char
        else: 
            result += " "
    return result