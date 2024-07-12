def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"

    for char in message:
        if char.isalpha():
            is_upper = char.isupper()
            char = char.lower()

            char_code = ord(char)

            if char not in vowels:
                new_code = ord(char) + 2
            else:
                new_code = ord(char) - 2

            if new_code > 122:
                new_code -= 26

            encoded_char = chr(new_code)
            if is_upper:
                encoded_char = encoded_char.upper()

            encoded_message += encoded_char
        else:
            encoded_message += char

    return encoded_message