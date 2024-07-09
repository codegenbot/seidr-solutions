def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char) - ord("a") + 1) % 26 + ord("A")) + ' '  # Add a space after encoding each character
            else:
                encoded_message += char.swapcase() + ' '  # Add a space after encoding each character
        else:
            encoded_message += char + ' '  # Add a space for non-alphabetic characters

    return encoded_message.rstrip()  # Remove the trailing space before returning