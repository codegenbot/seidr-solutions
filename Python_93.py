```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() == 'a':
                    result += 'y'
                elif char.lower() == 'e':
                    result += 'h'
                elif char.lower() == 'i':
                    result += 'j'
                elif char.lower() == 'o':
                    result += 's'
                elif char.lower() == 'u':
                    result += 'w'
            else:
                if char.isupper():
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
        else:
            result += char
    return result