def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            encoded_char = chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
            encoded_message += (
                encoded_char.upper() if char.isupper() else encoded_char.lower()
            )
        else:
            encoded_message += char

    return encoded_message