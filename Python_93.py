def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    alphabet_size = 26
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char.lower()) + 2 - ord('a')) % alphabet_size + ord('a'))
            else:
                encoded_message += chr((ord(char) + 2 - (ord('A') if char.isupper() else ord('a'))) % alphabet_size + (ord('A') if char.isupper() else ord('a')))
        else:
            encoded_message += char
    return encoded_message