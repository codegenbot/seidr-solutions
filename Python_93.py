def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == "X" or char == "Z":
                    encoded_message += char
                else:
                    encoded_message += chr(ord(char) + 1)
            elif char.islower():
                if char == "x" or char == "z":
                    encoded_message += char
                else:
                    encoded_message += chr(ord(char) + 1)
        else:
            encoded_message += char
    return encoded_message