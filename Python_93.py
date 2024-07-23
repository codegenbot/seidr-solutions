def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                shift = 65 if char.isupper() else 97
                encoded_char = chr((ord(char) - shift + 3) % 26 + shift)
            else:
                encoded_char = char.lower()
            encoded_message += encoded_char
        else:  
            encoded_message += 'x' 
    return encoded_message