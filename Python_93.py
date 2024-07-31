```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char in vowels:
                index = (ord(char) - ord('a')) % 6
                result += chr(ord('a') + index + 2)
            else:
                result += char.swapcase()
        else:
            result += char
    return result