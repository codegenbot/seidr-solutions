def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if ('aeiou'.find(char.lower()) != -1):  
                result += chr((ord(char) - 97 + 3) % 26 + 97) if char.islower() else chr((ord(char) - 65 + 3) % 26 + 65)
            elif char == ' ': 
                result += " "
            else:
                result += char
        else:
            result += char
    return result