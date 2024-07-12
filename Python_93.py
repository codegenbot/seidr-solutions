```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                result += char.upper() if char.islower() else char.lower()
        else:
            result += char
    return result