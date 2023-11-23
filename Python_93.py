def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ''.join(chr(ord(char) + 2) if char.isalpha() and char in vowels else char.swapcase() if char.isalpha() else char for char in message)
    return encoded_message