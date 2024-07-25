```
def encode(message):
    result = ""
    for char in message:
        if char == ' ':
            result += ' '
        elif char.isalnum():
            if char.isdigit():  
                result += str((int(char) + 3) % 10)  
            elif char.isalpha():
                if char.islower():
                    result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
                else:
                    result += chr((ord(char) - ord('A') + 25) % 26 + ord('A'))
        else:
            result += char
    return result

print("I DoNt KnOw WhAt tO WrItE")