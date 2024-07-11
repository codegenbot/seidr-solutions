def encode(message):
    result = ""
    prev_alnum = False
    for char in message:
        if char.isalnum():
            if not prev_alnum:
                if char.isalpha():
                    if char.isupper():
                        result += chr((ord(char) - 65 + 3) % 26 + 65)
                    else:
                        result += chr((ord(char) - 97 + 3) % 26 + 97)
                elif char.isdigit():
                    result += str(int(char) + 3) if int(char) < 9 else '0'
            else:
                result += char
            prev_alnum = True
        else:
            result += str(char)
            prev_alnum = False
    return result