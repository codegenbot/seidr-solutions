def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr(ord(char) + 2)  # Adding +2 for vowels
            else:
                encoded_message += chr(ord(char) - 1)  # Subtracting 1 for consonants
        else:
            encoded_message += char
    return encoded_message