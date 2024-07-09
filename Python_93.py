def encode(message):
    encoded_message = "".join(chr((ord(char) + 2 - 65) % 26 + 65).upper() if char.isalpha() and char.upper() in "AEIOU" else char for char in message)
    return encoded_message