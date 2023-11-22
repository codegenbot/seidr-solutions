def encode(message):
    encoded_message = []
    for char in message:
        if char.isalpha() or char.isspace():
            char = char.lower()
            if char in ['a', 'e', 'i', 'o', 'u']:
                encoded_message.append(char.upper())
            else:
                encoded_message.append(char)
        else:
            encoded_message.append(char)
    return "".join(encoded_message)