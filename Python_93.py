def encode(message):
    encoded_message = ''
    for char in message:
        if char.lower() in 'aeiou':
            encoded_message += chr(ord(char) + 2).upper()
        else:
            encoded_message += char.swapcase()
    return encoded_message