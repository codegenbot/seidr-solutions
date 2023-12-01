def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.upper() in ["A", "E", "I", "O", "U"]:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message