
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = chr(ord(char) - 2)
            if encoded_char in vowels:
                encoded_char = chr(ord(encoded_char) + 2)
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message