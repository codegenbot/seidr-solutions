def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_char = chr(ord(char) + 3)
            else:
                encoded_char = chr(ord(char) + 2) if char.islower() else chr(ord(char) + 1)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message.lower()