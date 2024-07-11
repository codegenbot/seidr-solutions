def encode_message(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            first_letter = 'AEIOUaeiou'.index(char.upper()) % 4
            encoded_char = chr((ord('A') + first_letter) % 26)
            if char.islower():
                encoded_message += encoded_char
            else:
                encoded_message += encoded_char.upper()
        else:
            encoded_message += char
    return encoded_message