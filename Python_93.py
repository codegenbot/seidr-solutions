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
            result += str((int(char) - 0 + 3) % 10).lstrip('0') or '7' if (int(char) - 0 + 3) // 10 > 0 and int(char) - 0 + 3 == 10 else '8'
        else:  
            result += char
    return result