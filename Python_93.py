```
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(vowels[vowels.index(char.lower())]) - ord('a')
                encoded_char = chr(ord('a') + (index + 2) % 26)
            else:
                encoded_char = char.swapcase()
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message