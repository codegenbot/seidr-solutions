def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                ascii_offset = 97 if char.islower() else 65
                if ord(char) - ascii_offset < 3:
                    result += chr((ord(char) - ascii_offset + 25) % 26 + ascii_offset)
                else:
                    result += chr((ord(char) - ascii_offset + 3) % 26 + ascii_offset)
            else:
                result += char.lower()
        else:
            if char == " ":
                result += "%20"
            elif char == "!":
                result += "/!"
            elif char == "?":
                result += "/?"
            elif char == ",":
                result += "."
            else:
                result += char
    return result