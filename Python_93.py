```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                if char.islower():
                    result += chr((ord(char) - 97 + 2) % 26 + 97).upper()
                else:
                    result += chr((ord(char) - 65 + 2) % 26 + 65)
        else:
            result += char
    return result