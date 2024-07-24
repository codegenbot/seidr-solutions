def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            result += chr((ord(char.lower()) - 97 + 3) % 26 + 97)
        elif char.isspace():  
            result += ' '
        else:
            result += char
    return result