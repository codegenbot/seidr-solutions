```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = ord(char.upper()) - 97
                encoded_message += chr((index + 2) % 26 + 97)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message