```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if ord(char) - 64 in [21,25,9,15,20]:
                    result += 'z'
                elif ord(char) - 64 == 24:
                    result += 'b'
                else:
                    result += chr((ord(char) - 64 + 1) % 26 + 65)
            else:
                if ord(char.lower()) - 97 in [1,5,9,15,21]:
                    result += 'z'
                elif ord(char.lower()) - 97 == 25:
                    result += 'b'
                else:
                    result += chr((ord(char.lower()) - 97 + 1) % 26 + 97)
        else:
            result += char
    return result