```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            result += chr((ord(char) - ord('A') + 3) % 26 + ord('A')) if char.isupper() else chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
        else:
            result += char
    return result