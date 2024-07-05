def encode(message):
    vowels = ["a", "e", "i", "o", "u"]
    encoded_message = ""
    for char in message:
        if char.isalpha(): # Check if character is alphabetical
            if char.islower(): # If lowercase, encode as uppercase
                encoded_char = chr((ord(char) - ord("a") + 2) % 26 + ord("A"))
            else: # If uppercase, encode as lowercase
                encoded_char = chr((ord(char) - ord("A") + 2) % 26 + ord("a"))
        else: # If not alphabetical, don't encode
            encoded_message += char
    return encoded_message