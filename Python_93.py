def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.islower():
                    result += chr((ord('a') + (ord(char) - ord('a') + 1) % 26))
                else:
                    result += chr((ord('A') + (ord(char) - ord('A') + 1) % 26))
            else:
                if char.islower():
                    result += chr((ord('a') + (ord(char) - ord('a') + 3) % 26))
                else:
                    result += chr((ord('A') + (ord(char) - ord('A') + 3) % 26))
        else:
            result += char
    return result