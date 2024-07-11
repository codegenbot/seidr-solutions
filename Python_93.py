```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                if ord(char) - 65 + 3 <= 26:
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 65 - 25) % 26 + 65)
            else:
                if ord(char) in (32, 95): 
                    result += char
                else:
                    result += char
        else:
            result += char
    return result