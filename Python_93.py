```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            if char.isupper():
                result += chr((ord(char) + 2 - ord('A')) % 26 + ord('A'))
            else:
                result += chr((ord(char) + 2 - ord('a')) % 26 + ord('a'))
        elif char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 1) % 26 + ord('A'))
            else:
                result += chr((ord(char) + 1) % 26 + ord('a'))
        else:
            result += char
    return result