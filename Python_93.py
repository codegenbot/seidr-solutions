```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if 97 <= ord(char) <= 122:
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
                elif 65 <= ord(char) <= 90:
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += char.swapcase()
        else:
            result += char
    return result