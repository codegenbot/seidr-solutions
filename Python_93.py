def encode(message):
    vowels = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'y'}
    encoded_message = ''
    
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.isupper():
                    encoded_message += vowels[char.lower()].upper()
                else:
                    encoded_message += vowels[char.lower()]
            elif char.isupper():
                encoded_message += char.swapcase()
            else:
                encoded_message += char
        else:
            encoded_message += char
    
    return encoded_message