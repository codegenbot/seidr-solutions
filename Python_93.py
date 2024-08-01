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
                    result += char
        else:
            result += char
    return result