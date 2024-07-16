def encode(message):
    result = ""
    for char in message:
        if char == " ": 
            result += char
        elif char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char.upper()) - ascii_offset + 3) % 26 + ascii_offset)
        else: 
            result += char