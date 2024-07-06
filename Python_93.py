def encode(message):
    # Create a dictionary to map vowels to their shifted values
    vowel_map = {"a": "c", "e": "g", "i": "k", "o": "m", "u": "q"}

    # Initialize an empty string to store the encoded message
    encoded_message = ""

    # Iterate over each character in the message
    for char in message:
        # If the character is a vowel, shift its value and append it to the encoded message
        if char.lower() in vowel_map:
            ascii_code = ord(char) + 2
            encoded_message += chr(ascii_code)
        # Otherwise, just append the original character to the encoded message
        else:
            encoded_message += char

    return encoded_message