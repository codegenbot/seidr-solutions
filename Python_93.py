def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            shifted_char = (
                chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
                if char.isupper()
                else chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
            )
            encoded_message += shifted_char
        else:
            encoded_message += char

    return encoded_message