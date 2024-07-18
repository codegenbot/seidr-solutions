def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char.upper()) + 2 - ord('A')) % 26 + ord('A')).lower()
            else:
                encoded_message += char.swapcase()
        elif char == " ":  # Add condition to handle spaces
            encoded_message += char
    return encoded_message