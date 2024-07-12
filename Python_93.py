def encode(message):
    message = message.lower()
    encoded_message = ""
    vowels = "aeiou"

    for char in message:
        if char.isalpha():
            char_code = ord(char)
            if char in vowels:
                new_code = ord(char) + 2
            else:
                new_code = ord(char) - 2

            encoded_message += chr(
                new_code if 97 <= new_code <= 122 else (97 + new_code) % 122 + 96
            )
        else:
            encoded_message += char

    return encoded_message