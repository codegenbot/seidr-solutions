def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.isupper():
                    index = (5 - vowels.index(char.lower())) % 6
                else:
                    index = (vowels.index(char.lower()) + 1) % 6
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                result += char.swapcase()
        else:
            result += char
    return result