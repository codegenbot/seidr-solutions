```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            elif char.islower():
                result += char.upper()
            else:
                result += char.lower()
        else:
            result += char
    return result