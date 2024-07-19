def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = (vowels.index(char) + 2) % 6
            result += vowels[index]
        elif char.isalpha():
            if char.islower():
                result += char.upper()
            else:
                result += char.lower()
        else:
            result += char
    return result