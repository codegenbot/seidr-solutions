def encode(message):
    encoded_message = ""
    for char in message:
        if char.isupper():
            char = char.lower()
        
        if char.isalpha():
            encoded_char = chr((ord(char) - ord('a') + 20) % 26 + ord('a'))
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message