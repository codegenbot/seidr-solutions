```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'aeiou'.find(char.lower()) != -1:  
                result += chr((ord(char) - 97 + 2) % 26 + 97)  
            elif char.isupper():  
                result += chr((ord(char) - 65 + 2) % 26 + 65)  
            else:
                result += (char.swapcase())  
        else:
            if result and result[-1].isalpha():
                result += ' '
            result += char
    return result