def encode(message):
    result = ""
    message = message.lower()
    for char in message:
        if char.isalpha():
            if char in 'aeiou':
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                result += char.swapcase().lower()
        else:
            result += char
    return result