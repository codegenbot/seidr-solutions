```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        elif char.isdigit():  
            result += char
        elif not char.isalnum(): 
            ascii_offset = 65 if ord(char) < 96 else 48
            result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
        else:
            result += '*'
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))