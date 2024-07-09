def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            ascii_offset = 97
            result += chr((ord(char.lower()) - 97 + 3) % 26 + 97)
        elif char.isdigit():  
            result += char
        elif not char.isalnum() and char != ' ':  
            result += '*'
        else:
            result += char
    return result

print(encode("I DoNt KnOw WhAt tO WrItE"))