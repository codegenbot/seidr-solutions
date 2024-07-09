def encode(message):
    encoded_message = ""
    vowels = "aeiou"
    for char in message:
        shift = 2 if char.islower() else -2 if char.isupper() else 0
        encoded_char = chr((ord(char) + shift - ord("a") if char.islower() else ord(char) + shift - ord("A")) % 26 + ord("a") if char.islower() else ord("A"))
        encoded_message += encoded_char
    return encoded_message