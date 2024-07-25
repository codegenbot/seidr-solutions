def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = char.swapcase()
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message