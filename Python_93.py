def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char.lower() == 'x':
                    result += 'A'
                elif char.lower() == 'y':
                    result += 'B'
                else:
                    result += chr((ord(char.lower()) - 64 + 1) % 26 + 65)
            else:
                if char in ['a', 'e', 'i', 'o', 'u']:
                    if char == 'a':
                        result += 'b'
                    elif char == 'e':
                        result += 'g'
                    elif char == 'i':
                        result += 'k'
                    elif char == 'o':
                        result += 'q'
                    else:
                        result += chr((ord(char) - 97 + 1) % 26 + 97)
                else:
                    result += chr((ord(char) - 97 + 1) % 26 + 97)
        else:
            result += char
    return result