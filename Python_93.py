def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        encoded_message += chr((ord(char) - ord('A') + 2) % 26 + ord('A')) if char.isupper() else chr((ord(char) - ord('a') + 2) % 26 + ord('a')) if char.islower() else char
    return encoded_message