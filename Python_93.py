Here is the solution to the problem:
```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                if ord(char) - 64 in [1, 2, 3]:
                    if char == 'A' or char == 'a':
                        result += 'X'
                    elif char == 'B' or char == 'b':
                        result += 'Y'
                    else:
                        result += chr(ord(char) - 3 + 65)
                else:
                    result += chr(ord(char) + 1)
            else:
                if ord(char) - 97 in [1, 2, 3]:
                    if char == 'a':
                        result += 'd'
                    elif char == 'e':
                        result += 'g'
                    elif char == 'i':
                        result += 'k'
                    elif char == 'o':
                        result += 'q'
                    else:
                        result += 's'
                else:
                    result += chr(ord(char) + 1)
        else:
            result += char
    return result