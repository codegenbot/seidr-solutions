def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                if ord(char) - 65 + 3 <= 26:
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 65 - 25) % 26 + 65)
            elif char.isdigit():
                if int(char) + 3 <= 9:
                    result += str(int(char) + 3)
                else:
                    result += str(int(char) - 9)
        else:
            result += char
    return result