```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += chr(ord('a') + (ord(char.lower()) - ord('a') + 2) % 26)
            else:
                result += chr(ord('A') + (ord(char.upper()) - ord('A') + 2) % 26) if char.isupper() else char.swapcase()
        else:
            result += char
    return result