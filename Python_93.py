def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (ord(char.lower()) - ord('a') + 2) % 26
                encoded_char = chr(ord('a') + index)
                encoded_message += encoded_char if char.isupper() else encoded_char.lower()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message