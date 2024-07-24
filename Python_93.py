def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            shift = 2 if char.upper() in vowels else 3
            encoded_message += chr((ord(char) + shift - ord('A')) % 26 + ord('A')).lower() if char.islower() else chr((ord(char) + shift - ord('A')) % 26 + ord('A'))
        else:
            encoded_message += char
    return encoded_message