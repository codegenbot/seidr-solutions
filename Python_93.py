def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"

    for char in message:
        if char.isalpha():
            char_code = ord(char)

            step = 1 if char.lower() in vowels else 2

            if char.islower():
                new_code = (char_code - ord("a") + step) % 26 + ord("a")
            else:
                new_code = (char_code - ord("A") + step) % 26 + ord("A")

            encoded_message += chr(new_code)
        else:
            encoded_message += char

    return encoded_message