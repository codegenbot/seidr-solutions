def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr(ord(char) + 2)
                if char.isupper():
                    encoded_char = encoded_char.upper()
                else:
                    encoded_char = encoded_char.lower()
            elif not char.isalpha():
                encoded_char = char.swapcase()
            else:
                encoded_char = char
        else:
            encoded_message += char
    return encoded_message