def encode(message):
    vowels = "aeiou"
    encoded_message = ""
    for char in message:
        if char.lower() in vowels:
            encoded_message += chr(ord(char) + 2).upper()
        elif char != ' ':
            encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message