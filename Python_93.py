def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isupper():
            encoded_message += chr((ord(char) - ord('A') + 4) % 25 + ord('A'))
        elif char.islower():
            encoded_message += chr((ord(char) - ord('a') + 4) % 25 + ord('a'))
        else:
            encoded_message += char
    return encoded_message