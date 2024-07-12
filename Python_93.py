def encode(message):
    message = message.lower()
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            char_code = ord(char)
            new_code = (char_code - ord('A') + vowels.index(char.lower()) + 1) % 26 + ord('A') if char.isupper() else (char_code - ord('a') + vowels.index(char.lower()) + 1) % 26 + ord('a')
            encoded_message += chr(
                new_code if char.isupper() and new_code <= 90 or char.islower() and new_code <= 122 else new_code - 26
            )
        else:
            encoded_message += char
    return encoded_message