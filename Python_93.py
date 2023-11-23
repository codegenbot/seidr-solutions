def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in ['a', 'e', 'i', 'o', 'u']:
                encoded_message += chr(ord(char.lower()) + 2).upper()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message