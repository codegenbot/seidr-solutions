def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += char.swapcase().upper()
        else:
            encoded_message += char
    return encoded_message