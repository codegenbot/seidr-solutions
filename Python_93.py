def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            encoded_char = chr((ord(char) - base + 2) % 26 + base)
            encoded_message += encoded_char
        else:
            encoded_message += char

    return encoded_message