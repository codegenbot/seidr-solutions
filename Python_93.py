def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            encoded_char = chr(ord(char) + 2)
            if encoded_char > 'Z':
                encoded_char = chr(ord(encoded_char) - 26)  # Wrap around for letters beyond 'Z'
            encoded_message += encoded_char.upper()
        else:
            encoded_message += char

    return encoded_message