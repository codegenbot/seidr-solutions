def encode(message):
    vowels = {'a': 'e', 'e': 'i', 'i': 'o', 'o': 'u', 'u': 'a',
        'A': 'E', 'E': 'I', 'I': 'O', 'O': 'U', 'U': 'A'}
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += vowels[char.lower()]
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message