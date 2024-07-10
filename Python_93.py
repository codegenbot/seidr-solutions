def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                offset = -1
                encoded_message += chr((ord(char) - ord('A' if char.isupper() else 'a') + offset) % 26 + ord('A' if char.isupper() else 'a')).lower()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += ' '
    return encoded_message