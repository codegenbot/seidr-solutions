
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                char_index = (vowels.index(char.lower()) + 2) % len(vowels)
                encoded_char = vowels[char_index].upper() if char.isupper() else vowels[char_index]
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message