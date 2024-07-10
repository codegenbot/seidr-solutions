def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 65 + 2) % 26 + 97)
            else:
                result += char.swapcase()
        else:
            result += char
    return result