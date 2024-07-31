def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == "X":
                    encoded_message += "A"
                elif char == "Y" or char == "Z":
                    encoded_message += "B" if char == "Y" else "C"
                else:
                    encoded_message += chr(ord(char) + 1)
            else:
                if char == "x":
                    encoded_message += "t"
                elif char == "y" or char == "z":
                    encoded_message += "b" if char == "y" else "c"
                else:
                    encoded_message += chr(ord(char) + 1).lower()
        else:
            encoded_message += char
    return encoded_message