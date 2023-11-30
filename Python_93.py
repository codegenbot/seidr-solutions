def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            char = char.lower() if char.islower() else char.upper()
            if char in vowels:
                encoded_message += chr(ord(char.lower()) + 1)  # Fixed the encoding logic
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message