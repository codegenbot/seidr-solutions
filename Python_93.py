```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                ascii_offset = 97 if char.islower() else 65
                if ord(char) - ascii_offset < 3:
                    result += chr((ord(char) - ascii_offset + 25) % 26 + ascii_offset)
                else:
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            else: 
                result += char.lower()
        elif char == " ": # handle spaces correctly
            result += "+"
        elif char in "!?,.:; '": # handle special characters
            result += "/".join([f"{ord(c)-44:.2X}" for c in char])
        else:
            if char.isdigit():
                result += chr((int(char) - 48) % 10 + 55)
            else: 
                result += char
    return result