```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char.lower()) - 97 + 2) % 26 + 97)
                result += new_char.upper() if char.isupper() else new_char
            else:
                result += char.swapcase()
        else:
            result += char
    return result