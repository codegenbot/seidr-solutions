def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""
    for char in message:
        if char.lower() in vowels:
            encoded_message += chr(ord(char) + 2).upper()
        else:
            encoded_message += char.swapcase()
    return encoded_message