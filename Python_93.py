```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.isupper():
                    result += chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
                else:
                    result += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            elif char.lower() == 'y':
                if char.isupper():
                    result += 'B'
                else:
                    result += 'b'
            else:
                if char.isupper():
                    result += char.upper()
                else:
                    result += char
        else:
            result += char
    return result