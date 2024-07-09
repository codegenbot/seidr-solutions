def encode(message):
    vowels = "AEIOUaeiou"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.upper() in "AEIOU":
                encoded_message += chr(ord(char) + 2).upper()
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message