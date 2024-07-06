```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                if char in 'aeiou':
                    result += chr((ord(char) - 97 + 3) % 26 + 97)
                else:
                    result += chr((ord(char) - 97 + ord(char).bit_length()) % 26 + 97)
            else:
                if char in 'AEIOU':
                    result += chr((ord(char) - 65 + 3) % 26 + 65)
                else:
                    result += chr((ord(char) - 65 + ord(char).bit_length()).upper())
        else:
            result += char
    return result