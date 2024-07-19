```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(vowels[vowels.index(char.lower())]) - 97
                new_index = (index + 2) % 26
                result += chr(97 + new_index)
            else:
                result += char.swapcase()
        else:
            result += char
    return result