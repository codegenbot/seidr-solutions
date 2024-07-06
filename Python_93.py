def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_char = chr(ord("A") + (ord(char) - ord("A")) % 26)
        else:
            encoded_message += char
    return encoded_message