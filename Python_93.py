```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) - 97 + 2) % 26 + 97)
            else:
                result += chr((ord(char.lower()) - 65 + 3) % 26 + 65) if char.islower() else char
        else:
            result += char
    return result