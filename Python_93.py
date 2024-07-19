def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == "X":
                    result += "A"
                elif char == "Y":
                    result += "B"
                elif char == "Z":
                    result += "C"
                else:
                    result += chr(ord(char) + 1)
            else:
                if char == "x":
                    result += "T"
                elif char == "y":
                    result += "U"
                elif char == "z":
                    result += "a"
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result