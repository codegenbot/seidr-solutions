def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            offset = 2 if char.isupper() else -24
            new_char = chr(((ord(char) - ord('A') + offset) % 26) + ord('A'))
            encoded_message += new_char
        else:
            encoded_message += char

    return encoded_message