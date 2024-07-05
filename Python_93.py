def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr(ord(char) + 2)
                if char.isupper():
                    new_char = new_char.upper()
            else:
                new_char = char.swapcase()
        encoded_message += new_char
    return encoded_message