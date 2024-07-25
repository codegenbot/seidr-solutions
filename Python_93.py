```
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
                    shift = (ord(char) - ord('A')) + 3
                    while shift > 25:
                        shift -= 26
                    result += chr(((shift) % 26) + ord('A'))
                else:
                    shift = (ord(char) - ord('a')) + 3
                    while shift > 25:
                        shift -= 26
                    result += chr(((shift) % 26) + ord('a'))
        else:
            result += char  
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))