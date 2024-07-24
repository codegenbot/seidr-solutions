def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char.lower()) - 97 + 13) % 26 + 65)
            elif char.islower():
                result += chr((ord(char) - 97 + 2) % 26 + 97)
        else:
            if char == " ":  
                result += " "
            else:  
                result += char
    return result