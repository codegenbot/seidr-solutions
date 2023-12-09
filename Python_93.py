def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
    encoded_message = ''
    for char in message.lower():
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char) + 2) % len(vowels)
                encoded_message += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                encoded_message += char.swapcase()
    return encoded_message