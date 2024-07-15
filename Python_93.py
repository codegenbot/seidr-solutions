```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (vowels.index(char.lower()) + 2) % 6
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            elif char.isupper():
                result += 'T' if char == 't' else 'H'
            else:
                result += 't' if char == 'T' else 'h'
        else:
            result += char
    return result