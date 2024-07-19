def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr(ord(char) + 2 if ord(char) + 2 <= 122 else ord(char) - 24)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message