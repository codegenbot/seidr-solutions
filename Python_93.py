```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                encoded_char = chr(((ord(char.lower()) - 97 + 2) % 26) + 97)
                if char.isupper():
                    encoded_char = encoded_char.upper()
            else:
                if char.isupper():
                    encoded_char = char.lower()
                else:
                    encoded_char = char
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message