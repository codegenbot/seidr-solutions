def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ""
    for char in message:
        if char.lower() in vowels:
            encoded_message += chr(ord(char) + 2)
        else:
            encoded_message += char.swapcase()
    return encoded_message