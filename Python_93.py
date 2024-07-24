def encode(message):
    encoded_message = ""
    vowels = "aeiou"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += chr(ord(char) + 1) if char.islower() else chr(ord(char) - 1)
        else:
            encoded_message += char
    return encoded_message.lower()