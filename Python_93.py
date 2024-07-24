```
def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.islower():
                    encoded_message += chr((ord(char) - 97 + 2) % 26 + 97)
                else:
                    encoded_message += chr((ord(char) - 65 + 2) % 26 + 65)
            elif char.isupper():
                encoded_message += char.lower().swapcase()
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message