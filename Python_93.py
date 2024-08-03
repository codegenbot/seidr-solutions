```
def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.isupper():
                    encoded_message += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    encoded_message += chr((ord(char) - 97 + 3) % 26 + 97)
            elif char.isupper():
                encoded_message += char.lower()
            else:
                encoded_message += char.upper()
        else:
            encoded_message += char
    return encoded_message