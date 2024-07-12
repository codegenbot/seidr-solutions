def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'y':
                result += 'y' if char.islower() else 'Y'
            elif char.lower() in 'aeiou':
                if char.lower() == 'o':
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
                else:
                    result += chr((ord('a') if char.islower() else ord('A')) + ((ord(char) - (ord('a') if char.islower() else ord('A'))) + 2) % 26)
            else:
                result += chr(((ord(char) - ord('a' if char.islower() else 'A')) + 3) % 26 + ord('a' if char.islower() else 'A'))
        else:
            result += char
    return result