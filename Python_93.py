```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + (2 if char.lower() in 'aeiou' else 0)) % 26 + 65)
            else:
                result += chr((ord(char) - 97 + (2 if char in 'aeiou' else 0)) % 26 + 97)
        else:
            result += char
    return result