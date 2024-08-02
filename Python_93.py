def encode(message):
    encoded_message = ''
    vowels = 'AEIOUaeiou'
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += chr(ord(char) + 1)  # Modify this line to encode non-vowel characters
        else:
            encoded_message += char
    return encoded_message