def encode(message):
    vowels = "AEIOUaeiou"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_char = chr(ord(char) + 2).swapcase()
            else:
                encoded_char = char.swapcase()
            encoded_message += encoded_char
        else:
            encoded_message += char

    return encoded_message