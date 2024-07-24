```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if ('aeiou'.find(char.lower()) != -1):
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                if char.islower():
                    result += (char.upper())
                else:
                    result += (char.lower())
        else:
            result += char
    return result