```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'aeiou'.index(char.lower()) < 2:
                if char.islower():
                    result += chr((ord('a') + ((ord(char) - ord('a')) + 3) % 26))
                else:
                    result += chr((ord('A') + ((ord(char) - ord('A')) + 3) % 26))
            elif char.lower() == 'o':
                if char.islower():
                    result += chr((ord('a') + (2) % 26))
                else:
                    result += chr((ord('A') + (2) % 26))
            else:
                result += char
        else:
            result += char
    return result