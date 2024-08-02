def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            encoded_message += chr(ord(char) + 2) if char.islower() else chr(ord(char) + 2).upper()
        else:
            encoded_message += char
    return encoded_message