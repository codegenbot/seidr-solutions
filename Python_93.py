def encode(message):
    vowels = ["a", "e", "i", "o", "u"]
    encoded_msg = ""
    for char in message:
        if char.lower() in vowels:
            encoded_char = chr(ord(char) + 2)
        else:
            encoded_char = char
        if char.isupper():
            encoded_msg += encoded_char.lower()
        else:
            encoded_msg += encoded_char.upper()
    return encoded_msg