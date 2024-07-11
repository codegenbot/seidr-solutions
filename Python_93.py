```
def encode(message):
    result = ""
    prev_alnum = False
    for char in message:
        if char.isalnum():
            if not prev_alnum:
                result += char
                prev_alnum = True
            else:
                if char.isalpha():
                    if char.isupper():
                        result += chr((ord(char) - 65 + 3) % 26 + 65)
                    else:
                        result += chr((ord(char) - 97 + 3) % 26 + 97)
                elif char.isdigit():
                    if int(char) < 9:
                        result += str(int(char) + 3)
                    else:
                        result += '0'
        elif not char.isalnum() and not char.isspace():
            result += char
            prev_alnum = False
        else:
            if prev_alnum:
                result += " "
            prev_alnum = False
    return result