```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                new_char = chr((ord(char) - 97 + 2) % 26 + 97)
            encoded_message += new_char
        else:
            encoded_message += char
    return encoded_message