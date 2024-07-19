def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            shift = 3 if char.lower() in vowels else 7
            encoded_char_ord = (
                ((ord(char) - ord("A") + shift) % 26) + ord("A")
                if char.isupper()
                else ((ord(char) - ord("a") + shift) % 26) + ord("a")
            )
            encoded_message += chr(encoded_char_ord)
        else:
            encoded_message += char
    return encoded_message