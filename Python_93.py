def encode(message: str) -> str:
    vowels = "aeiouAEIOU"
    consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char in vowels:
                index = vowels.index(char)
                encoded_char = vowels[(index + 1) % len(vowels)]
            elif char == "z":
                encoded_char = "b"
            elif char == "Z":
                encoded_char = "B"
            else:
                index = consonants.index(char)
                encoded_char = consonants[(index + 1) % len(consonants)]
        else:
            encoded_char = char

        encoded_message += encoded_char

    return encoded_message