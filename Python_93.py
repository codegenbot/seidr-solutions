```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            else:
                result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
        elif char.isdigit():
            result += char
        else:
            result += char
    return result