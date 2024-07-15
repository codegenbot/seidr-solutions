def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - 97
                new_char = chr((index + 2) % 26 + 97)
                encoded_message += new_char.upper() if char.isupper() else new_char
            elif char.isupper():
                encoded_message += char.swapcase()
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message