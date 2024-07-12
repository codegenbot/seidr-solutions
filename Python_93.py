def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"

    for char in message:
        if char.isalpha():
            char_code = ord(char)
            if char.lower() in vowels:
                new_code = char_code + 1
            else:
                new_code = char_code + 2

            if char.islower() and new_code > 122:
                new_code -= 26
            elif char.isupper() and new_code > 90:
                new_code -= 26

            encoded_message += chr(new_code)
        else:
            encoded_message += char

    return encoded_message