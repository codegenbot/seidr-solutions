```Python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.islower():
                    result += chr((ord(char) - 97 + 2) % 26 + 96)
                else:
                    result += chr((ord(char) - 65 + 2) % 26 + 64).swapcase()
            else:
                if char.islower():
                    result += chr((ord(char) - 97 + 3) % 26 + 96)
                else:
                    result += chr((ord(char) - 65 + 3) % 26 + 64).swapcase()
        else:
            result += char
    return result