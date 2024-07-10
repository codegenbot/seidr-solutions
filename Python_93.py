def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char.lower()) - ord('a') + 3) % 26 + ord('a'))
            else:
                if char.islower():
                    encoded_message += chr((ord(char) - ord('a') + 3) % 26 + ord('a'))
                else:
                    encoded_message += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
        else:
            encoded_message += ' '
    return encoded_message