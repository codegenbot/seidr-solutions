```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_pos = (ord(char) - 97 + 3) % 26
                result += chr(new_pos + 97)
            else:
                result += char.swapcase()
        else:
            result += char
    return result