def encode(message: str) -> str:
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            offset = 1 if char.lower() in vowels else -1
            encoded_char = chr((ord(char) - ord('A' if char.isupper() else 'a') + offset) % 26 + ord('A' if char.isupper() else 'a'))
            encoded_message += encoded_char.lower() if char.islower() else encoded_char.upper()
        else:
            encoded_message += ' '
    return encoded_message