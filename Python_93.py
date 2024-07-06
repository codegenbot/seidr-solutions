
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            new_char = chr((ord(char) + 2) % 26)
            encoded_message += new_char
        else:
            encoded_message += char
    return encoded_message