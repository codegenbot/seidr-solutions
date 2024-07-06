
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.lower() in vowels:
            encoded_char = chr((ord(char) + 2 - ord('a')) % 26 + ord('A'))
        else:
            encoded_char = char.swapcase()
        encoded_message += encoded_char
    return encoded_message