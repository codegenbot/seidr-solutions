def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'Y':
                    result += char
                else:
                    result += chr((ord(char) + 2 - ord('A')) % 26 + ord('A'))
            elif char.islower():
                if char == 'x' or char == 'y':
                    result += char
                else:
                    result += chr((ord(char) + 2 - ord('a')) % 26 + ord('a'))
        else:
            result += char
    return result