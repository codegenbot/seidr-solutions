def encode(message):
    encoded_message = ""
    vowels = "aeiou"

    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_code = ord(char) + 2
            else:
                new_code = ord(char) - 2

            if char.isupper():
                if new_code > 90:
                    new_code -= 26
            else:
                if new_code > 122:
                    new_code -= 26

            encoded_message += chr(new_code)
        elif char == " ":
            encoded_message += " "
        else:
            encoded_message += char

    return encoded_message