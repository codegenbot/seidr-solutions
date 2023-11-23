def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_char = chr((ord(char.lower()) - ord('a') + 20) % 26 + ord('a'))
            if char.isupper():
                encoded_message += encoded_char.upper()
            else:
                encoded_message += encoded_char
        else:
            encoded_message += char.lower()
    return encoded_message