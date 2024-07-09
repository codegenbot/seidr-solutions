def encode(message):
    encoded_message = ""
    vowels = "aeiou"
    for char in message:
        if char.lower() in vowels:
            encoded_char = chr((ord(char) + 2 - ord("a")) % 26 + ord("a"))
            encoded_message += encoded_char
        else:
            encoded_message += char.swapcase()
    return encoded_message