```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'x' or char.lower() == 'y':
                result += 'A' if char.isupper() else 'b'
            elif char.lower() in ['a', 'e', 'i', 'o', 'u']:
                if char.isupper():
                    result += {c:'c', 'a':'d', 'e':'f', 'i':'h', 'o':'j', 'u':'l'}[char]
                else:
                    result += {c:'c', 'a':'b', 'e':'g', 'i':'k', 'o':'q', 'u':'s'}[char]
            elif char.isupper():
                result += chr(ord(char) + 1)
            else:
                result += chr(ord(char) + 1).lower()
        else:
            result += char
    return result