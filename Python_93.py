```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            shift = ord('a') - ord(char.lower())
            new_char = chr((ord(char.lower()) + shift) % 26 + ord('a'))
            if char.isupper():
                result += new_char.upper()
            else:
                result += new_char
        else:
            result += char
    return result