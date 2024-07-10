def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                offset = 2 if char.islower() else -2
                encoded_char = chr(
                    (ord(char) - ord("A" if char.isupper() else "a") + offset) % 26
                    + ord("A")
                )
                encoded_message += (
                    encoded_char.upper() if char.isupper() else encoded_char.lower()
                )
            else:
                encoded_message += char
        else:
            encoded_message += " "
    return encoded_message