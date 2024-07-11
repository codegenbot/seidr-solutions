def encode(message):
    result = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                result += chr(((ord(char.upper()) - ord('A') + 3) % 26) + ord('A')) if char.isupper() else \
                         chr(((ord(char.lower()) - ord('a') + 3) % 26) + ord('a'))
            else:
                result += char
        else:
            result += char
    return result