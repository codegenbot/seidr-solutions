def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""
    for char in message:
        if char in vowels:
            index = (ord(char) - 97) % 26
            encoded_message += chr((index + 2) % 26 * 65 + 97)
        elif char.isalpha():
            encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message