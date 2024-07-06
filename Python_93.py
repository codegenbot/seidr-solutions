```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char.lower()) - 97 + 3) % 26 + 97)
            elif char.lower() >= 'n' and char.lower() <= 'z':
                result += chr((ord(char.lower()) - 96 + 1) % 26 + 96)
            else:
                if char.islower():
                    result += chr((ord(char) - 96) % 26 + 96)
                else:
                    result += char
        else:
            result += char
    return result