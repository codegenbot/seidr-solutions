```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                shift = 2
            else:
                shift = -1
            encoded_char = chr((ord(char.lower()) + shift) % 26 + 97 if char.islower() else (ord(char.upper()) + shift) % 26 + 65)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message