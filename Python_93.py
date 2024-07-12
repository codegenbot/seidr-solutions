```
def encode(message):
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                result += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            elif char.isupper():
                result += chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
            else:
                if char.islower():
                    result += char.swapcase()
                else:
                    result += char
        else:
            result += char
    return result