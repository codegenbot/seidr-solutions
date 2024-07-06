```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord('A') + 1) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + 1) % 26 + ord('a'))
        elif char.lower() in 'aeiou':
            if char.isupper():
                result += chr((ord('y') - ord('A')) + 1)
            else:
                result += 'y'
        else:
            result += char
    return result