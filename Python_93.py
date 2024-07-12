def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.islower():
                    result += chr((ord(char) - ord('a')) % 26 + ord('a'))
                else:
                    result += chr((ord(char) - ord('A')) % 26 + ord('A'))
            else:
                if char.islower():
                    result += chr((ord(char) - ord('a')) % 26 + ord('a') + ord('a'))
                else:
                    result += chr((ord(char) - ord('A')) % 26 + ord('A') + ord('A'))
        else:
            result += char
    return result