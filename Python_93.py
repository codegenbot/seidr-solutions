def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
    return encoded_message