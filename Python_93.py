```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                new_char = char.swapcase()
            result += new_char
        else:
            result += char
    return result