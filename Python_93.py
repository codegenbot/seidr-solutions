```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                encoded_char = chr((ord(char.lower()) - 97 + 2) % 26 + 97)
                if char.isupper():
                    encoded_char = encoded_char.upper()
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message