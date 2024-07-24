def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += chr((ord(char) - 97 + 3) % 26 + 97)
        elif char.isdigit():  
            num = int(char)
            result += str((num + 3) % 10) if (num + 3) % 10 else '7' if (num // 10 + 2) % 10 else '8'
        else:  
            result += char
    return result