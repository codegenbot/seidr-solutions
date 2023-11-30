def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            char = char.lower()
            if char in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message