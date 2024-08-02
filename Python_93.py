def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            encoded_char = chr((ord(char) - ord('A') + 2) % 26 + ord('A')).upper()
            encoded_message += encoded_char
        else:
            encoded_message += char

    return encoded_message