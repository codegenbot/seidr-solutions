def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == "X":
                    result += "A"
                elif char == "Y":
                    result += "B"
                else:
                    result += chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
            else:
                if char == "x":
                    result += "a"
                elif char == "y":
                    result += "b"
                else:
                    result += chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
        else:
            result += char
    return result