def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.isupper():
                    index = (vowels.index(char.lower()) + 1) % 5
                    result += vowels[index].upper()
                else:
                    result += vowels[(vowels.index(char.lower()) + 1) % 5].lower()
            else:
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()
        else:
            result += char
    return result