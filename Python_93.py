def encode(message):
    result = ""
    for char in message:
        if char == " ":  
            result += char
        else:
            if char.isalpha():
                if char.isupper():
                    result += chr(((ord(char) - 65 + 3) % 26) + 65)
                else:
                    result += chr(((ord(char.lower()) - 97 + 3) % 26) + 97)
            else:
                if char.isdigit(): 
                    result += str(int(char) + 3)
                elif char in "!@#$%^&*():_-,+~`=¬'[]{}`|\\<>?":
                    result += char
                else:
                    result += char
    return result