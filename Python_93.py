def encode(message):
    encoded_message = ""
    for char in message:
        if char.islower():
            encoded_char = chr((ord(char) - ord('a') + 20) % 26 + ord('a'))
        elif char.isupper():
            encoded_char = chr((ord(char) - ord('A') - 6) % 26 + ord('A'))
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message