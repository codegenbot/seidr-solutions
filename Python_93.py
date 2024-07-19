```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % 6
                encoded_char = vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message