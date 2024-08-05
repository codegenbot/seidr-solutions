def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                new_char = chr((ord(char) - ord("A") + 2) % 26 + ord("a"))
            else:
                new_char = chr((ord(char) - ord("A") + 1) % 26 + ord("A"))
        else:
            new_char = char
        encoded_message += new_char
    return encoded_message