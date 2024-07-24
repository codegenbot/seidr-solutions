def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += chr(ord(char) + 2)
            else:
                encoded_message += chr(ord(char) + 1) if char.islower() else chr(ord(char) - 1)
        else:
            encoded_message += char.lower()
    return encoded_message