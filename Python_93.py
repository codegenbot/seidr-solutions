```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char.lower()) - 97
                encoded_char = chr((index + 2) % 26 + 97)
                if char.isupper():
                    encoded_char = encoded_char.upper()
                else:
                    encoded_char = encoded_char.lower()
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message