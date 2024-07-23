def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'z':
                result += 'a' if char.islower() else 'A'
            elif char.lower() in 'bcdfghjklmnpqrstvwxyz':
                result += chr(ord(char) + 1)
            elif char.lower() in 'aeiou':
                result += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
            else:
                if char.isupper():
                    result += char.lower()
                else:
                    result += char.upper()
        else:
            result += char
    return result