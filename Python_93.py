```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97
            result += chr((ord(char.lower()) - ascii_offset + 3) % 26 + ascii_offset)
        elif char.isdigit():  
            result += char
        elif not char.isalnum() and char != ' ':  
            result += '*'
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))