def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            shift = 2  # Shift value changed to 2
            encoded_char = chr((ord(char.lower()) - ord("a") + shift) % 26 + ord("a"))
            encoded_message += encoded_char.upper() if char.isupper() else encoded_char
        else:
            encoded_message += char
    return encoded_message