```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(vowels[ord(char.lower()) - 1]) - 97
                result += chr(97 + (index + 2) % 5)
            else:
                result += char.swapcase()
        else:
            result += char
    return result