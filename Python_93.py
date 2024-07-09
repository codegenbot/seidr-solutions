def encode(message):
    encoded_message = ''
    vowels = 'aeiou'
    for char in message:
        if char.lower() in vowels:
            encoded_char = chr((ord(char.lower()) + 2 - ord('a')) % 26 + ord('a'))
        else:
            encoded_char = char.swapcase()
        encoded_message += encoded_char
    return encoded_message