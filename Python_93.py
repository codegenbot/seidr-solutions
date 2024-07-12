```
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'y':
                result += chr((ord(char) - 97 + 3) % 26 + 97) if char.islower() else chr((ord(char) - 65 + 3) % 26 + 65)
            elif char.lower() in 'aeiou':
                if char.lower() == 'o' or char.lower() == 'u':
                    result += chr((ord(char) - 111 + 2) % 26 + 111) if char.islower() else chr((ord(char) - 73 + 2) % 26 + 73)
                else:
                    result += chr((ord(char) - 97 + 2) % 26 + 97) if char.islower() else chr((ord(char) - 65 + 2) % 26 + 65)
            else:
                result += chr(((ord(char) - ord('a' if char.islower() else 'A')) + 3) % 26 + ord('a' if char.islower() else 'A'))
        else:
            result += char
    return result