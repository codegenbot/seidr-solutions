```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char) - 97
                result += chr((index + 2) % 26 + 97)
            else:
                result += char.swapcase()
        else:
            result += char
    return result