def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            new_position = (ord(char) - ord("A") + 2) % 26
            if new_position > 25:
                new_position -= 26
            encoded_char = chr(new_position + ord("A"))
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message