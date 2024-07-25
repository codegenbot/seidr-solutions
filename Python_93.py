def encode(message):
    result = ""
    for char in message:
        if char == ' ':
            result += ' '
        elif char.isalnum():
            if char.isdigit():  
                result += str((int(char) + 3) % 10)  
            else:
                if char.isupper():
                    result += chr(((ord(char) - ord('A')) + 25) % 26 + ord('A'))
                else:
                    result += chr(((ord(char) - ord('a')) + 3) % 26 + ord('a'))
        else:
            result += char  
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))