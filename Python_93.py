def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr(ord("A") + (ord(char) - ord("A") + 2) % 26)
            else:
                result += chr(ord("a") + (ord(char) - ord("a") + 2) % 26)
        else:
            result += char
    return result