def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            char = char.lower()
            if char.lower() in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += char.lower().swapcase()
        else:
            encoded_message += char
    return encoded_message.upper()