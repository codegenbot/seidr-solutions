```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) - 97 + 3) % 26 + 97)
            else:
                result += 'w' if (ord(char.lower()) - 96) % 8 == 0 else char
        else:
            result += char
    return result