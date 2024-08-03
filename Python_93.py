def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                if char.lower() == "a":
                    result += "1"
                elif char.lower() == "e":
                    result += "3"
                elif char.lower() == "i":
                    result += "!"
                elif char.lower() == "o":
                    result += "0"
                elif char.lower() == "u":
                    result += "_"
            else:
                if char.islower():
                    result += chr(ord(char) + 3)
                else:
                    result += chr(ord(char) - 3).upper()
        else:
            result += char
    return result