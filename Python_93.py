```
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded_char = chr((ord(char) + 32) % 26)
            else:
                encoded_char = chr((ord(char) - 32) % 26)
            if char.lower() in 'aeiou':
                encoded_char = chr((ord(encoded_char) + 2) % 26 + ord('a'))
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message