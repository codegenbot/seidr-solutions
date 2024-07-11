```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = ord(char) - ord('a')
            result += chr(ord('a') + (index + 2) % 6)
        else:
            result += char.swapcase()
    return result