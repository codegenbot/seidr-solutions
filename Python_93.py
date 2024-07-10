```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = vowels.index(char.lower()) + 2
                if index >= len(vowels):
                    index -= len(vowels)
                if char.isupper():
                    encoded_message += vowels[index].upper()
                else:
                    encoded_message += vowels[index]
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message