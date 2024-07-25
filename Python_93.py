```Python
def encode(message):
    result = ""
    for char in message:
        if char == ' ':
            result += ' '
        elif char.isalpha():
            if char.islower():
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            else:
                result += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
        else:
            result += char
    return result