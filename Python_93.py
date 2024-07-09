def encode(message):
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            shift = 2 if char.lower() in vowels else 2 if char.isupper() else 2
            encoded_message += chr((ord(char) + shift - ord('A' if char.isupper() else 'a')) % 26 + ord('A' if char.isupper() else 'a'))
        else:
            encoded_message += char
    return encoded_message