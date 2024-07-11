def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                if char.isupper():
                    result += chr((ord(char) - 65 + 2) % 26 + 65)
                else:
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
            elif char.isupper():
                result += chr(ord(char) + 32 if ord(char) < 78 else ord(char) - 2)
            else:
                result += chr(ord(char) - 32 if ord(char) > 96 else ord(char) + 2)
        else:
            result += char
    return result