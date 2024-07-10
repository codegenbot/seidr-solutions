def encode(message: str) -> str:
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            offset = 2 if char.lower() in vowels else 1
            encoded_char = chr((ord(char) - ord('a' if char.islower() else 'A') + offset) % 26 + ord('a' if char.islower() else 'A'))
            encoded_message += encoded_char.lower() if char.islower() else encoded_char.upper()
        else:
            encoded_message += char
    return encoded_message