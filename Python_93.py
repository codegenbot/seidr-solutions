def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ((vowels.index(char.lower()) + 1) % 6)
                if char.isupper():
                    result += vowels[index].upper()
                else:
                    result += vowels[index].lower()
            else:
                if char.isupper():
                    result += char.swapcase().upper()
                else:
                    result += char.swapcase()
        else:
            result += char
    return result