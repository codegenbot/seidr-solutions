```
def encode(message):
    result = ""
    for char in message:
        if char.isalnum():  
            if char.lower() in 'aeiou':
                base = ord('a' if char.islower() else 'A')
            else:
                if not char.islower():
                    if ord(char) <= ord('n'):
                        base = ord('a' if char.islower() else 'A')
                    else:
                        base = ord('n' if char.islower() else 'N')
                else:
                    if ord(char) >= ord('e'):
                        base = ord('a' if char.islower() else 'A')
                    else:
                        base = ord('e')

            result += chr((ord(char) - base + 3) % 26 + base)
        else:
            result += char
    return result