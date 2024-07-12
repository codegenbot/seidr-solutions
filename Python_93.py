def encode(message):
    message = message.lower()
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            char_code = ord(char)
            if char.lower() in vowels:
                new_code = (char_code - ord('A') + vowels.index(char.lower()) - 2) % 26 + ord('A')
                if char.isupper():
                    encoded_message += chr(
                        new_code if new_code <= 90 else new_code - 26
                    )
                else:
                    encoded_message += chr(
                        new_code if new_code <= 122 else new_code - 26
                    )
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message