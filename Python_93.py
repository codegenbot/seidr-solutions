def encode(message):
    encoded_message = ''
    vowels = 'aeiou'
    for char in message:
        if char.lower() in vowels:
            encoded_message += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
        else:
            encoded_message += char.swapcase()
    return encoded_message