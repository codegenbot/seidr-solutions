def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % len(vowels)
                encoded_message += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                encoded_message += char.swapcase()
    return encoded_message