def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char) - 97 + 3) % 26 + 97)
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message