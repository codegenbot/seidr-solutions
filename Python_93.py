
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ""
    for char in message:
        if char.isalpha() and char.lowercase():
            encoded_char = chr((ord(char) - ord('a') + 2) % 26 + ord('A'))
        else:
            encoded_message += char
    return encoded_message