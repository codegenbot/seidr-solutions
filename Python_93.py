def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():  # Handle alphabetical characters separately
            if char.islower():
                encoded_char = chr(ord("A") + (ord(char) - ord("a")) % 26)
            elif char.isupper():
                encoded_char = chr(ord("A") + (ord(char) - ord("A")) % 26)
        else:  # Handle non-alphabetical characters
            encoded_char = chr(ord(char))  # Just return the character as-is
        encoded_message += encoded_char
    return encoded_message