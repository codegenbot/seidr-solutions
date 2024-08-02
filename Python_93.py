def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            offset = ord("A") if char.isupper() else ord("a")
            new_char = chr((ord(char) - offset + 2) % 26 + offset)
            encoded_message += new_char
        else:
            encoded_message += char

    return encoded_message