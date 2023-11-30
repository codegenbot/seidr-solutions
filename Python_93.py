def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message