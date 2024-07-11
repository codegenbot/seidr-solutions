def encode(message):
    encoded_message = ''
    for char in message:
        if char.lower() in 'aeiou':
            encoded_message += chr((ord(char) + 2 - 97) % 26 + 97).upper()
        else:
            encoded_message += char.swapcase()
    return encoded_message