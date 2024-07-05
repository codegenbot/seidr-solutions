def encode(message):
    vowels = 'aeiouAEIOU'
    replacement = 'cgkqwcgkqw'
    encoded_message = []
    
    for char in message:
        if char in vowels:
            encoded_message.append(replacement[vowels.index(char)])
        else:
            encoded_message.append(char.swapcase())
    
    return ''.join(encoded_message)