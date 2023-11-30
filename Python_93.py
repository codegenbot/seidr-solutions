def encode(message: str) -> str:
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_char = chr(ord(char) + 2)
            else:
                if char == 'z':
                    encoded_char = 'a'
                elif char.isupper():
                    encoded_char = chr(ord(char) + 2)
                else:
                    encoded_char = chr(ord(char) + 2)
        else:
            encoded_char = char

        encoded_message += encoded_char

    return encoded_message