def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) - 97 + 3) % 26 + 97)
            else:
                result += '9' if char.islower() and '0' <= char <= '8' else char.upper() if char.islower() else char.lower()
        else:
            result += char
    return result