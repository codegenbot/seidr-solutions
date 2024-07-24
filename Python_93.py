```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += chr((ord(char) - 97 + 3) % 26 + 97)
        elif char.isdigit():  
            result += str(int(char) + 3) if int(char) + 3 < 10 else '7'
        else:  
            result += char
    return result