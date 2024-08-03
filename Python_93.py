```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char.lower()) - 97
                encoded_char = chr((index + 2) % 26 + 97)
                encoded_message += encoded_char.upper() if char.isupper() else encoded_char
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message