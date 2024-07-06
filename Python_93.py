```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + 1) % 26 + ord('a'))
        elif char.lower() in 'aeiou':
            if char.isupper():
                result += chr((ord(char) - ord('E') + 4) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('e') + 4) % 26 + ord('a'))
        else:
            result += char
    return result