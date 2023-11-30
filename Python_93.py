def encode(message: str) -> str:
    encoded_message = ""

    for char in message:
        if char.isalpha():
            encoded_char = chr(ord(char) + 2)
            if encoded_char > "Z" and encoded_char < "a":
                encoded_char = chr(ord(encoded_char) - 26)
            elif encoded_char > "z":
                encoded_char = chr(ord(encoded_char) - 26)
        else:
            encoded_char = char

        encoded_message += encoded_char
        
    return encoded_message