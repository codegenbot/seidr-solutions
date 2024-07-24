def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_char = chr((ord(char.upper()) + 2 - ord('A')) % 26 + ord('A'))
                encoded_message += encoded_char.lower() if char.islower() else encoded_char
            else:
                encoded_char = chr((ord(char.upper()) + 3 - ord('A')) % 26 + ord('A'))
                encoded_message += encoded_char.lower() if char.islower() else encoded_char
        else:
            encoded_message += char
    return encoded_message