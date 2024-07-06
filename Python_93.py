
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.lower() in vowels:
            new_char = chr(ord(char) + 2)
            if ord(char) >= 65 and ord(char) <= 90:
                new_char = new_char.upper()
            encoded_message += new_char
        else:
            encoded_message += char.swapcase()
    return encoded_message