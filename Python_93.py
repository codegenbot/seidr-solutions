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
            else:
                encoded_char = char.swapcase()
        else:
            # Handle non-alpha characters
            if char == ' ':
                encoded_message += ' '
            elif char in vowels:
                encoded_message += char
            else:
                encoded_message += char.swapcase()
    return encoded_message