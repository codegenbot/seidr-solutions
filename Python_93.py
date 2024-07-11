def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = char
            else:
                index = (ord(char.lower()) - ord('a') + 2) % 26
                encoded_char = chr(ord('a') + index)
                encoded_message += 't' if char == 'w' or char == 'T' else encoded_char.swapcase()
        else:
            encoded_message += char
    return encoded_message