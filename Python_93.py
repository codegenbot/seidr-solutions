def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                if char.isupper():
                    result += chr((ord(char.lower()) - 97 + 13) % 26 + 65)
                elif char.islower():
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                result += chr((ord(char) - 32 + 3) % 26 + 32)
        else:
            if char == " ":  
                result += " "
            else:  
                result += char
    return result