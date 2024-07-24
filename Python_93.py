```Python
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                ascii_offset = 97 if char.islower() else 65
                if ord(char) - ascii_offset < 3:
                    result += chr((ord(char) - ascii_offset + 25) % 26 + ascii_offset)
                else:
                    if char.isupper():
                        ascii_offset = 65
                    else: 
                        ascii_offset = 97
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            elif char.isdigit():
                ascii_offset = 48 if int(char) <= 9 else 55
                result += chr((int(char) - ascii_offset) % 10 + ascii_offset)
        elif char == " ": 
            result += "+"
        elif char in "!\"',.:;":
            result += "/" + "".join(f"{ord(c)-44:.2X}" for c in char)
        else: 
            if char == "!":
                result += ">"
            elif char == "\"":
                result += "%"
            elif char == "'":
                result += "!)"
            elif char == ".":
                result += "*"
            elif char == ",":
                result += "-"
            else: 
                result += ""
    return result