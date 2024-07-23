def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalnum():
            if char.isalpha():
                if char.isupper():
                    shift = ord('A')
                else:
                    shift = ord('a')
                encoded_char = chr((ord(char) - shift + 3) % 26 + shift)
            else:  
                encoded_char = char
        else:  
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message