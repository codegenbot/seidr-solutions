```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            if char.islower():
                index = (ord(char) - ord('a') + 1) % 26
            else:
                index = (ord(char) - ord('A') + 1) % 26
            result += chr(ord('a') + index)
        elif char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result