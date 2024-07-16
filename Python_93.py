def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isdigit():
                if int(char) + 3 > 9:
                    result += str((int(char) + 3) % 10)
                else:
                    result += str(int(char) + 3)
            elif char.isalpha():
                if char.isupper():
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                result += char
        else:
            result += " "
    return result