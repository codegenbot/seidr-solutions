```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'aeiou'.find(char.lower()) != -1:  
                result += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))  
            elif char.isupper():  
                result += chr((ord(char) - ord('A') + 13) % 26 + ord('A'))  
            else:
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
        else:
            result += char
    return result