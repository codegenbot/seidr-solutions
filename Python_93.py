def encode(message):
    vowels = ["a", "e", "i", "o", "u"]
    encoded_message = ""
    for char in message:
        if char.lower() in vowels:
            encoded_message += char.lower()
        else:
            encoded_message += char.upper()
    return encoded_message