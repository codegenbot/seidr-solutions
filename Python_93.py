def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            elif char.upper() in 'AEIOU':
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += chr((ord(char) - 96 if char.islower() else ord(char) - 64) % 26 + (96 if char.islower() else 64))
        else:
            result += char
    return result