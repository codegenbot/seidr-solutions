```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.isupper():
                if char == 'X' or char == 'x':
                    result += 'A' if char.isupper() else 'a'
                elif char == 'W' or char == 'w':
                    result += 'E' if char.isupper() else 'e'
                elif char == 'V' or char == 'v':
                    result += 'Y' if char.isupper() else 'y'
                else:
                    result += chr(ord(char) + 3)
            else:
                if char.lower() in ['a', 'e', 'i', 'o', 'u']:
                    position = ord(char) - ord('a')
                    if position == 0:
                        result += 'a' if char.islower() else 'A'
                    elif position == 1:
                        result += 'b' if char.islower() else 'B'
                    elif position == 2:
                        result += 'c' if char.islower() else 'C'
                    elif position == 3:
                        result += 'd' if char.islower() else 'D'
                    elif position == 4:
                        result += 'e' if char.islower() else 'E'
                else:
                    result += chr(ord(char) - 1)
        else:
            result += char
    return result