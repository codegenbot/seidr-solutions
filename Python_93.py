def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                encoded_char = chr(ord("A") + (ord(char) - ord("A") + 2) % 26)
            else:
                encoded_char = chr(ord("a") + (ord(char) - ord("a") + 2) % 26)
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message