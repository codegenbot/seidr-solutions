```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = vowels.index(char.lower()) + 2
                if index > len(vowels) - 1:
                    index -= len(vowels)
                result += vowels[index]
            else:
                result += ('' if char.islower() else '').upper()
        else:
            result += char
    return result