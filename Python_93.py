def encode(message):
    encoded_message = ''
    vowels = 'aeiou'
    encoded_message = ''.join([char.upper() if char.islower() else char.lower() for char in message])
    encoded_message = encoded_message + ''.join([chr(ord(char.lower()) + 2) if char.lower() in vowels else '' for char in message])
    return encoded_message