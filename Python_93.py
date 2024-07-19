```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                base = 65 if char.isupper() else 97
            else:
                base = 65 if char.isupper() else 97
                
            if char.lower() in 'aeiou':
                result += chr((ord(char) - base + 3) % 26 + base)
            else:
                result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result