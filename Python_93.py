def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = chr(ord(char) - 1)
            if char.isupper():
                encoded_message += encoded_char.upper()
            else:
                encoded_message += encoded_char.lower()
        else:
            encoded_message += char
    return encoded_message