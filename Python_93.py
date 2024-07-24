def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr((ord(char) + 3 - ord('A')) % 26 + ord('A'))
            else:
                encoded_message += chr((ord(char) + 2 - 65) % 26 + 65) if char.islower() else chr((ord(char) - 1 - 65) % 26 + 65)
        else:
            encoded_message += char
    return encoded_message