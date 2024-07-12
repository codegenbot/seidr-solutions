def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() == 'y':
                result += 'y' if char.islower() else 'Y'
            elif char.lower() in 'aeiou':
                if char.islower():
                    if char.lower() == 'o':
                        result += 'O'
                    else:
                        result += chr((ord('A') + ((ord(char) - ord('a')) + 2) % 26))
                else:
                    if char.lower() == 'o':
                        result += 'O'
                    else:
                        result += chr((ord('A') + ((ord(char) - ord('a')) + 2) % 26))
            else:
                if char.isupper():
                    result += chr((ord('A') + ((ord(char) - ord('A')) + 3) % 26))
                else:
                    result += chr((ord('a') + ((ord(char) - ord('a')) + 3) % 26))
        else:
            result += char
    return result