```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char.lower()) - 97
                result += chr((index + 2) % 26 + 97).upper() if char.isupper() else chr((index + 2) % 26 + 97)
            else:
                result += char.upper() if char.islower() else char.lower()
        else:
            result += char
    return result