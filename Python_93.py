def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = vowels.index(char.lower())
                encoded_message += vowels[(index + 1) % len(vowels)]
            else:
                encoded_message += char.upper()
        else:
            encoded_message += char
    return encoded_message