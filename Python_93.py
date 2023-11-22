def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha() or char.isspace():
            char_lower = char.lower()
            if char_lower in ["a", "e", "i", "o", "u"]:
                encoded_message += char_lower
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message