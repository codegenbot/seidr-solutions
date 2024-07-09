def encode(message):
    vowels = "AEIOUaeiou"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr(ord(char) + 2).upper()
            else:
                encoded_message += chr(ord(char) + 1)
        else:
            encoded_message += char
    return encoded_message