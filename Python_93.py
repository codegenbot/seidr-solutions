```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char.lower()) - 97
                encoded_message += chr((index + 2) % 26 + 97).upper() if char.isupper() else chr((index + 2) % 26 + 97)
            elif char.isupper():
                encoded_message += char.swapcase()
            else:
                encoded_message += char.upper()
        else:
            encoded_message += char
    return encoded_message