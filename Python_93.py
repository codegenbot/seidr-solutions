def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.isupper():
                    result += chr((ord(char) - ord('A') + 13) % 26 + ord('A'))
                else:
                    result += chr((ord(char) - ord('a') + 13) % 26 + ord('a'))
            else:
                if char.isupper():
                    result += chr((ord(char) - ord('A')) % 26 + ord('A'))
                else:
                    result += char
        else:
            result += char
    return result