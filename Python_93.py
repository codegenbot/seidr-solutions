```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                result += chr((ord(char.upper()) - ord('A') + 2) % 26 + ord('A'))
            else:
                result += char.swapcase()
        else:
            result += char
    return result