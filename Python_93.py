def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = ord(char.upper()) - ord('a')
                encoded_message += chr(ord('a') + (index + 2) % 6)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message