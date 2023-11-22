def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha() or char.isspace():
            if char.lower() in ["a", "e", "i", "o", "u"] or char.isupper():
                encoded_message += char.upper()
            else:
                encoded_message += char.lower()
        else:
            encoded_message += char
    return encoded_message