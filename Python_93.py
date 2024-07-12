def encode(message):
    message = message.lower()
    encoded_message = ""
    vowels = "aeiou"

    for char in message:
        if char.isalpha():
            char_code = ord(char)
            if char not in vowels:
                new_code = ord(char) + 2
            else:
                new_code = ord(char)

            if new_code > 122:
                new_code -= 26

            encoded_message += chr(new_code)
        else:
            encoded_message += char

    return encoded_message