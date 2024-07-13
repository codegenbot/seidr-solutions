```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                encoded_char = chr((ord(char.lower()) + 2 - 97) % 26 + 97)
            elif char.isupper():
                encoded_char = chr((ord(char) - 65) + (ord('a') - 97))
            else:
                encoded_char = char
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message