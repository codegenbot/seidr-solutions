def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                if char == "a":
                    result += "c"
                elif char == "e":
                    result += "g"
                elif char == "i":
                    result += "k"
                elif char == "o":
                    result += "q"
                elif char == "u":
                    result += "w"
                else:
                    result += chr(ord(char) + 1)
            else:
                if char == "C":
                    result += "E"
                elif char == "G":
                    result += "I"
                elif char == "K":
                    result += "O"
                elif char == "Q":
                    result += "U"
                else:
                    result += chr(ord(char) - 1)
        else:
            result += char
    return result