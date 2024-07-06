```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
            else:
                new_char = chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
            result += new_char
        elif char.islower() or char.isupper():
            if char.swapcase() in 'aeiouAEIOU':
                if char.isupper():
                    new_char = chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
                else:
                    new_char = chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            else:
                result += char.swapcase()
        else:
            result += char
    return result