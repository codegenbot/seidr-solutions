```Python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'aeiou'.find(char.lower()) != -1:  
                result += chr((ord(char) - 97 + 2) % 26 + 97)  
            elif char.isupper():  
                result += chr((ord(char) - 65 + 13) % 26 + 65)  
            else:
                result += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            result += char
    return result