def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            char_lower = char.lower()
            if char_lower in ['a', 'e', 'i', 'o', 'u']:
                encoded_message += chr(ord(char_lower) + 1)
            else:
                encoded_message += chr(ord(char_lower.upper()) - 2)
        else:
            encoded_message += char
    return encoded_message