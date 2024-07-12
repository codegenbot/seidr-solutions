```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord('A') + 13) % 26 + ord('A'))
            else:
                result += chr((ord(char) - ord('a') + 13) % 26 + ord('a'))
        else:
            result += char
    return result