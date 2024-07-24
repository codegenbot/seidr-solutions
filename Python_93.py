def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            encoded_message += chr(ord(char) + 1) if char.islower() else chr(ord(char) + 2)
        else:
            encoded_message += char
    return encoded_message.lower()