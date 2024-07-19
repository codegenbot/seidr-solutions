```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                base = 65 if char.isupper() else 97
                result += chr((ord(char) - base + 3) % 26 + base)
            elif char.islower():
                result += chr((ord(char) - 97 + 3) % 26 + 65) if char.isupper() else chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                result += chr((ord(char.lower()) - 97 + 3) % 26 + 65)
        else:
            result += char
    return result