def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = ord(char.upper()) - 97
                encoded_char = chr((index + 2) % 26 + 97)
                encoded_message += encoded_char.lower()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message