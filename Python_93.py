def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) + 7 - ord('A')) % 26 + ord('A'))
            else:
                result += chr((ord(char) + 7 - ord('a')) % 26 + ord('a'))
        else:
            result += char
    return result