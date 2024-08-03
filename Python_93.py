def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == "a":
                result += "1"
            elif char.lower() == "b":
                result += "2"
            elif char.lower() == "c":
                result += "3"
            elif char.lower() == "d":
                result += "4"
            elif char.lower() == "e":
                result += "5"
            elif char.lower() == "f":
                result += "6"
            elif char.lower() == "g":
                result += "7"
            elif char.lower() == "h":
                result += "8"
            elif char.lower() == "i":
                result += "9"
            elif char.lower() == "j":
                result += "10"
            elif char.lower() == "k":
                result += "11"
            elif char.lower() == "l":
                result += "12"
            elif char.lower() == "m":
                result += "13"
            elif char.lower() == "n":
                result += "14"
            elif char.lower() == "o":
                result += "15"
            elif char.lower() == "p":
                result += "16"
            elif char.lower() == "q":
                result += "17"
            elif char.lower() == "r":
                result += "18"
            elif char.lower() == "s":
                result += "19"
            elif char.lower() == "t":
                result += "20"
            elif char.lower() == "u":
                result += "21"
            elif char.lower() == "v":
                result += "22"
            elif char.lower() == "w":
                result += "23"
            elif char.lower() == "x":
                result += "24"
            elif char.lower() == "y":
                result += "25"
            elif char.lower() == "z":
                result += "26"
        else:
            result += char
    return result