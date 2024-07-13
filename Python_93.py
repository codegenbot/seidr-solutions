def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if (
                char.lower() == "a"
                or char.lower() == "e"
                or char.lower() == "i"
                or char.lower() == "o"
                or char.lower() == "u"
            ):
                encoded_message += chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
            elif char.isupper():
                encoded_message += chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
            else:
                if char.lower() == "t" or char.lower() == "T":
                    encoded_message += "g" if char.lower() == "t" else "G"
                elif char.lower() == "s" or char.lower() == "S":
                    encoded_message += "z" if char.lower() == "s" else "Z"
                else:
                    encoded_message += char
        else:
            encoded_message += char
    return encoded_message