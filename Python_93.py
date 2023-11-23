def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in ['a', 'e', 'i', 'o', 'u']:
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = char.swapcase()
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message