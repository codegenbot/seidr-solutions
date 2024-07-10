def encode(message: str) -> str:
    encoded_message = ''
    vowels = 'aeiouAEIOU'
    for char in message:
        if char.isalpha():
            offset = 3 if char.upper() in vowels else 1 if char.isalpha() else 0
            offset *= -1 if char.isupper() != char.islower() else 1
            encoded_char = chr((ord(char) - ord('A' if char.isupper() else 'a') + offset) % 26 + ord('A' if char.isupper() else 'a'))
            encoded_message += encoded_char.lower() if char.islower() else encoded_char.upper()
        elif char == ' ':
            encoded_message += ' '
        else:
            encoded_message += char
    return encoded_message