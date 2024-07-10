def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            offset = -2 if char.lower() in vowels else 2
            encoded_char = chr((ord(char) - ord('A' if char.isupper() else 'a') + offset) % 26 + ord('A' if char.isupper() else 'a'))
            if char.lower() in vowels:
                encoded_message += encoded_char.upper()
            else:
                encoded_message += encoded_char.lower()
        else:
            encoded_message += ' '
    return encoded_message