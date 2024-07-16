def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr(ord(char.upper()) + 2)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += chr(ord(char) + 32)
    return encoded_message