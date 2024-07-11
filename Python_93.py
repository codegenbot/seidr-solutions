def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = (ord(char) - ord('a') + 2) % 26
            result += chr(ord('a') + index)
        elif char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result