def encode(message):
    message = message.lower()
    encoded_message = ""
    vowels = "aeiou"

    for char in message:
        if char.isalpha():
            char_code = ord(char)
            if char.lower() in vowels:
                new_code = ord(char) - 2
            else:
                new_code = ord(char) + 2

            if new_code > 122 or new_code < 97:
                new_code = new_code % 26 + 97

            encoded_message += chr(new_code)
        else:
            encoded_message += char

    return encoded_message