def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            encoded_char = chr(ord(char) + 2) if char.lower() in 'aeiou' else chr(ord(char) - 1)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message