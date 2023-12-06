def encode(message):
    encoded = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded += chr(ord('A') + (ord(char) - ord('a')) % 26)
            else:
                encoded += chr(ord('a') + (ord(char) - ord('A')) % 26)
        elif char.isspace() or char.ispunct():
            encoded += char
    return encoded