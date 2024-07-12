def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            char_code = ord(char)
            if char.lower() in vowels:
                new_code = char_code + 2
                if char.isupper():
                    encoded_message += chr(new_code if new_code <= 90 else new_code - 26)
                else:
                    encoded_message += chr(new_code if new_code <= 122 else new_code - 26)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message.lower()