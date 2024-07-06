def encode(message):
    encoded = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded += chr(ord("A") + (ord(char) - ord("A") + 2) % 26)
            else:
                encoded += chr(ord("a") + (ord(char) - ord("a") + 2) % 26)
        else:
            encoded += char
    return encoded