def encode(message):
    encoded_message = ""
    vowels = ["a", "e", "i", "o", "u"]
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr(ord(char) + 2)
                if encoded_char.lower() not in vowels:
                    encoded_char = chr(ord(encoded_char) - 26)
                encoded_char = encoded_char.lower()
                encoded_message += encoded_char
            else:
                encoded_char = chr(ord(char) + 2)  # Encode non-vowel characters
                if encoded_char.lower() in vowels:
                    encoded_char = chr(
                        ord(encoded_char) + 2
                    )  # If the encoded character becomes a vowel, increment by 2 again
                if encoded_char.lower() not in vowels:
                    encoded_char = chr(ord(encoded_char) - 26)
                encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message