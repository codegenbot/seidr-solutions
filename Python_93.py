def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_char = chr((ord(char) - ord('A') + 20) % 26 + ord('A')) if char.isupper() else chr((ord(char) - ord('a') + 20) % 26 + ord('a'))
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message