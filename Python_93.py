def encode(message: str) -> str:
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_char = chr(ord(char) + 2)
            else:
                if char == 'a':
                    encoded_char = 'z'
                elif char == 'A':
                    encoded_char = 'Z'
                else:
                    encoded_char = chr(ord(char) - 1)
        else:
            encoded_char = char

        encoded_message += encoded_char

    return encoded_message