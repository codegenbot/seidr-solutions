def encode(message):
    encoded_message = ""
    vowels = "aeiou"
    for char in message:
        if char.lower() in vowels:
            encoded_message += chr((ord(char) + 2 - ord("a")) % 26 + ord("a")).upper()
        else:
            encoded_message += char.swapcase()
    return encoded_message