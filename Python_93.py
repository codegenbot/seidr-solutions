def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            char_lower = char.lower()
            encoded_message += chr((ord(char_lower) - ord('a') + 2) % 26 + ord('a')).upper() if char.isupper() else chr((ord(char_lower) - ord('a') + 2) % 26 + ord('a'))
        else:
            encoded_message += char
    return encoded_message