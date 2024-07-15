```
def encode(message):
    vowels = 'aeiouAEIOU'
    translated = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (ord(char.lower()) - ord('a') + 2) % 26
                translated += chr(ord('a') + index)
            else:
                translated += char.swapcase()
        else:
            translated += char
    return translated