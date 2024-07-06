```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord('a') + (ord(char.lower()) - ord('a') + 2) % 26
                result += chr(index)
            else:
                result += char.swapcase()
        else:
            result += char
    return result