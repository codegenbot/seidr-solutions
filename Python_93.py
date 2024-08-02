def encode(message):
    encoded_message = ''
    vowels = 'aeiou'
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                if char.islower():
                    encoded_message += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
                else:
                    encoded_message += chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
            else:
                encoded_message += chr(ord(char) - 1)
        else:
            encoded_message += char
    return encoded_message