def encode(message):
    result = ""
    for char in message:
        if char == ' ':
            result += ' '
        elif char.isalnum():
            if char.isdigit():  
                result += str((int(char) + 3) % 10)  
            elif char.isalpha():
                result += chr((ord(char.upper()) - ord('A') + 3) % 26 + ord('A')) if char.isupper() else chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a'))
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))