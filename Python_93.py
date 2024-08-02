def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) + 2) % 26 + ord('a'))
            else:
                result += char.swapcase()
        else:
            result += char
    return result