```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ((vowels.index(char.lower()) + 1) % 6)
                result += vowels[index].upper() if char.isupper() else vowels[index].lower()
            else:
                # Check if the character is not a vowel
                if char.isalpha():
                    for i, v in enumerate(vowels):
                        if char.lower() == v.lower():
                            index = (i + 1) % 6
                            result += vowels[index].upper() if char.isupper() else vowels[index].lower()
                            break
        else:
            result += char
    return result