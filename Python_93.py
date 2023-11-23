def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            char_lower = char.lower()
            if char_lower in ['a', 'e']:
                encoded_message += chr(ord(char_lower) + 4)
            elif char_lower in ['i', 'o']:
                encoded_message += chr(ord(char_lower) + 5)
            elif char_lower == 'u':
                encoded_message += chr(ord(char_lower) + 6)
            else:
                encoded_message += chr(ord(char_lower) + 2)
        else:
            encoded_message += char
    return encoded_message