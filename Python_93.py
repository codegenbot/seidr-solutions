def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
            else:
                encoded_message += chr((ord(char) - (ord('A') if char.isupper() else ord('a')) + 2) % 26 + (ord('A') if char.isupper() else ord('a'))
        else:
            encoded_message += char
    return encoded_message