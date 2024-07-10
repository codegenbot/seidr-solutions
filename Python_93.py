```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if set('aeiou').intersection({char.lower()}) != {''}:
                if char.lower() in 'aeiou':
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
                else:  
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += char
        else:  
            result += char
    return result