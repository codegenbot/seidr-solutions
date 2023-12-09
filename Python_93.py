def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isupper():
            if char in vowels:
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
    return encoded_message