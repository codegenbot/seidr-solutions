def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        encoded_message += chr((ord(char) - ord('A') + 2) % 26 + ord('A')) if char.isupper() else char
    return encoded_message