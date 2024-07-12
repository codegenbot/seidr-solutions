```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord('a') + (ord(char) - ord('a')) % 8
                result += chr(index)
            else:
                result += char.swapcase()
        else:
            result += char
    return result