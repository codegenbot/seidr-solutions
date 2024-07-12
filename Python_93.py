def encode(message):
    message = message.lower()
    encoded_message = ""
    vowels = "aeiou"

    for char in message:
        if char.isalpha():
            char_code = ord(char)
            new_code = char_code + 2 if char in vowels else char_code - 2

            encoded_message += chr(
                new_code if 97 <= new_code <= 122 else 97 + (new_code % 122) - 1 if new_code > 122 else new_code
            )
        else:
            encoded_message += char

    return encoded_message