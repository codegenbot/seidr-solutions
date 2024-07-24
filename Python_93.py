```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 13 - ord('A')) % 26 + ord('A'))
            else:
                result += chr((ord(char) + 13 - ord('a')) % 26 + ord('a'))
        elif char.lower() in 'aeiou':
            if char.isupper():
                result += chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
        else:
            result += char
    return result