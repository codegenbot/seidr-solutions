```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % 6
                encoded_message += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message