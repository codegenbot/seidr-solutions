def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                shift = 2
            else:
                shift = -1 if char.islower() else 1
            encoded_message += chr(((ord(char) - ord("A") + shift) % 26) + ord("A"))
        else:
            encoded_message += char
    return encoded_message