```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = ord(char.upper()) - ord('A')
                result += chr(ord('A') + (index + 2) % 6)
            else:
                result += char.swapcase()
        else:
            result += char
    return result