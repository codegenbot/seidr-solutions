def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            shift = 1 if char.lower() in vowels else 2
            encoded_message += chr((ord(char) - ord("A") + shift) % 26 + ord("A"))
        else:
            encoded_message += char

    return encoded_message