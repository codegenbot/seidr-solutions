def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if 'a' <= char <= 'z':
                result += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
            else:
                result += chr((ord(char.lower()) - ord('A') + 13) % 26 + ord('A'))
        else:
            result += char
    return result