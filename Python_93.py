```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded_message += chr((ord(char) + 13) % 26).lower()
            else:
                encoded_message += chr((ord(char) - 97 + 13) % 26 + 97)
        else:
            encoded_message += char
    return encoded_message