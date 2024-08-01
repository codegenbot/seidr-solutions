```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = (vowels.index(char.upper()) + 2) % 6
                encoded_message += vowels[index].upper()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message