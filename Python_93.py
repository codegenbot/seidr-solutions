def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = (vowels.index(char.upper()) + 2) % 6
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            elif char.isupper():
                result += 'T' if char == 't' else 'z'
            else:
                result += 't' if char == 'T' else 'y'
        else:
            result += char
    return result