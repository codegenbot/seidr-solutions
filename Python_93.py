def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) - 97 + 3) % 26 + 97)
            else:
                result += '9' if char.islower() else '1'
        else:
            result += char
    return result