def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a')).swapcase()
            else:
                new_char = chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a')).swapcase()
            encoded_message += new_char
        else:
            encoded_message += char
    return encoded_message