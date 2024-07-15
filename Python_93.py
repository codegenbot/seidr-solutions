```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded_char = chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                encoded_char = chr((ord(char) - 97 + 2) % 26 + 97)
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message