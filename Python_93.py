def encode(message):
    encoded_message = ""
    for index, char in enumerate(message):
        if char.isalpha() or char.isspace():
            if char.lower() not in ["a", "e", "i", "o", "u"]:
                if index % 2 == 0:
                    encoded_message += char.lower()
                else:
                    encoded_message += char.upper()
            else:
                encoded_message += char.lower()
        else:
            encoded_message += char

    return encoded_message