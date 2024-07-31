```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            elif char.isupper():
                result += chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
            else:
                result += char
        else:
            result += char
    return result