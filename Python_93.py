def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                index = ord(char.upper()) - ord("a")
                new_char = chr((index + 2) % 6 + ord("a"))
                encoded_message += (
                    new_char.lower() if char.islower() else new_char.upper()
                )
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message