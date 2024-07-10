```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if 'AEIOUY'.index(char.lower()) % 5 == 0:
                    if char == 'X' or char == 'x':
                        result += 'A'
                    elif char == 'Y' or char == 'y':
                        result += 'B'
                    else:
                        result += chr(ord('A') + (ord(char) - ord('A')) % 26).upper()
                else:
                    if char == 'X' or char == 'x':
                        result += 'Z'
                    elif char == 'Y' or char == 'y':
                        result += 'B'
                    else:
                        result += chr(ord(char.lower()) + 1).upper()
            else:
                if 'aeiou'.index(char) % 5 in [0, 3]:
                    if char == 'a':
                        result += 'b'
                    elif char == 'e':
                        result += 'g'
                    elif char == 'i':
                        result += 'k'
                    elif char == 'o':
                        result += 'q'
                    else:
                        result += chr(ord(char) + 1).lower()
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result