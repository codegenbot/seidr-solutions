def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                shift = 65 if char.isupper() else 97
                encoded_char = chr((ord(char) - shift + 3) % 26 + shift)
                encoded_char = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz".lower()[ord(encoded_char)-shift]
            else:
                encoded_char = char.lower()
        else:  
            encoded_message += char
        encoded_message += encoded_char
    return encoded_message