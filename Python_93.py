def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'x':
                result += 'A'
            elif char.lower() == 'y':
                result += 'B'
            else:
                if char.isupper():
                    result += chr(ord(char) + 1)
                else:
                    result += chr(ord(char) + 1).lower()
        else:
            result += char
    return result