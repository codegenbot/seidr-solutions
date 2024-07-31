```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            pos = ord(char) - ord('a')
            result += chr((pos + 2) % 5 + ord('a'))
        else:
            result += char.swapcase()
    return result