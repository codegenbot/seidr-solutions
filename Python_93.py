def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'Y':
                    result += 'B'
                elif char == 'Z':
                    result += 'C'
                else:
                    result += chr(ord(char) + 1).lower()
            else:
                if char == 'a':
                    result += 'c'
                elif char == 'e':
                    result += 'g'
                elif char == 'i':
                    result += 'k'
                elif char == 'o':
                    result += 'q'
                elif char == 'u':
                    result += 'w'
                else:
                    result += chr(ord(char) + 2)
        else:
            result += char
    return result