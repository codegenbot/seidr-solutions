
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr(ord(char) + 2)
                if char.isupper():
                    new_char = new_char.upper()
                encoded_message += new_char
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message