def encode(message):
    encoded_message = ""
    for char in message.lower():
        if char.isalpha():
            if char in ['a', 'e', 'i', 'o', 'u']:
                encoded_message += char
            else:
                encoded_message += chr(ord(char) + 2)
        else:
            encoded_message += char
    return encoded_message