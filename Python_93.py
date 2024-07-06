def encode(message):
    encoded_message = ""
    for char in message:
        # Check if the character is alphabetic
        if char.isalpha():
            # Apply the encoding to alphabetic characters
            if char.islower():
                encoded_char = chr(ord("A") + (ord(char) - ord("a")) % 26)
            elif char.isupper():
                encoded_char = chr(ord("A") + (ord(char) - ord("A")) % 26)
        # If the character is not alphabetic, use it as is
        else:
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message