def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            ordinal = ord(char) - ord("A")
            if ordinal < 0:
                ordinal += 26
            encoded_char = chr(ordinal % 26 + ord("A"))
        else:
            encoded_message += char
    return encoded_message