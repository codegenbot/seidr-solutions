```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                if char == 'a' or char == 'e' or char == 'i' or char == 'o' or char == 'u':
                    encoded_message += chr((ord(char) - 97 + 3) % 26 + 97)
                else:
                    encoded_message += char.upper()
            elif char.isupper():
                if char == 'A' or char == 'E' or char == 'I' or char == 'O' or char == 'U':
                    encoded_message += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    encoded_message += char.lower()
        else:
            encoded_message += char
    return encoded_message