```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += (chr((ord(char.lower()) - 96) + 2) if char.islower() else chr((ord(char.upper()) - 64) + 2)).swapcase()
            else:
                result += char.swapcase()
        else:
            result += char
    return result