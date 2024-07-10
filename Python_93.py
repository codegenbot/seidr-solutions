def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ((vowels.index(char.lower()) + 1) % 6)
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                result += char
        else:
            result += char
    return result