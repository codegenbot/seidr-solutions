```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) - 97 + 2) % 26 + 97)
            else:
                if char.islower():
                    result += chr((ord(char) - 96) % 26 + 96)
                else:
                    result += chr((ord(char) - 64) % 26 + 64)
        else:
            result += char
    return result