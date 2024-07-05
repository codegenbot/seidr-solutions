def encode(message):
    vowels = ["a", "e", "i", "o", "u"]
    encoded_message = ""
    for char in message:
        if not char.isalpha() and char not in vowels:
            encoded_char = char
        elif char.islower():
            encoded_char = chr((ord(char) - ord("a") + 2) % 26 + ord("A"))
        elif char.isupper():
            encoded_char = chr((ord(char) - ord("A") + 2) % 26 + ord("a"))
        else:
            encoded_char = "?"
        encoded_message += encoded_char
    return encoded_message