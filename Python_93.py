```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            shift = 3
            if char.isupper():
                start = ord('A')
            else:
                start = ord('a')

            result += chr((ord(char) - start + shift) % 26 + start)
        else:
            result += char
    return result