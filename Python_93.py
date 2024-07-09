def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            encoded_message += chr((ord(char) + 2 - ord('a' if char.islower() else 'A')) % 26 + ord('a' if char.islower() else 'A'))
        else:
            encoded_message += char
    return encoded_message