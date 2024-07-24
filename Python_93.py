```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if ('aeiou'.find(char.lower()) != -1):
                result += chr((ord(char) - 96 + 2) % 26 + 96) if char.islower() else chr((ord(char) - 64 + 2) % 26 + 64)
            else:
                result += (char.swapcase())
        else:
            result += char
    return result