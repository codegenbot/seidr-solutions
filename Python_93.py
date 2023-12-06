
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = chr((ord(char) - ord('a') + 2) % 26 + ord('A'))
            else:
                encoded_char = chr((ord(char) - ord('A') + 2) % 26 + ord('a'))
        elif char.isspace() or char in string.punctuation:
            # Return non-alphanumeric characters unmodified
            encoded_char = ''
        else:
            raise ValueError(f"Invalid character '{char}'")
        encoded_message += encoded_char
    return encoded_message
