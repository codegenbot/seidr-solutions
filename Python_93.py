def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == "Z":
                    result += "A"
                else:
                    result += chr(ord(char) + 1)
            else:
                if char == "z":
                    result += "a"
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result.lower().swapcase()