```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) + 2 - ord('a')) % 26 + ord('a'))
            elif char.upper() in 'AEIOU':
                result += chr((ord(char) + 2 - ord('A')) % 26 + ord('A'))
            else:
                if char.isupper():
                    result += char.lower()
                else:
                    result += char.upper()
        else:
            result += char
    return result