def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha() or char.isspace():
            if char.lower() in ['a', 'e', 'i', 'o', 'u']:
                encoded_message += char.upper()
            else:
                encoded_message += char.lower()
        else:
            encoded_message += char  # Add this line to include non-alphabetic and non-space characters
    return encoded_message