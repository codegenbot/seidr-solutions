def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 3) % 6
                if index == 0:
                    index = 5
                if char.isupper():
                    result += vowels[index].upper()
                else:
                    result += vowels[index].lower()
            else:
                result += 'x' if char.isupper() else 'X'
        else:
            result += char
    return result