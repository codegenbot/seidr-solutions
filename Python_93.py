def encode(message):
    vowels = {'a', 'e', 'i', 'o', 'u'}
    encoded_message = []
    
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message.append(chr(ord(char) + 1))
            else:
                encoded_message.append(char.swapcase())
        else:
            encoded_message.append(char)
    
    return ''.join(encoded_message)