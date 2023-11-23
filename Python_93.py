def encode(message):
    encoded_message = ''
    for letter in message:
        if letter.isalpha():
            if letter.islower():
                encoded_message += letter.upper()
            else:
                encoded_message += letter.lower()
        else:
            encoded_message += letter
    vowels = ['a', 'e', 'i', 'o', 'u']
    for vowel in vowels:
        encoded_message = encoded_message.replace(vowel, chr(ord(vowel) + 2))
    return encoded_message