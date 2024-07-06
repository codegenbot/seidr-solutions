```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char.lower()) - 97
                new_char = chr((index + 2) % 26 + 97)
                if char.isupper():
                    result += new_char.upper()
                else:
                    result += new_char
            elif char.isupper():
                result += char.lower().swapcase()
            else:
                result += char.swapcase()
        else:
            result += char
    return result