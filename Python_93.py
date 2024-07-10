def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isupper():
            encoded_message += chr((ord(char) - ord('A') + 4) % 26 + ord('A'))
        elif char.islower():
            encoded_message += chr((ord(char) - ord('a') + 4) % 26 + ord('a'))
        elif char in vowels:
            encoded_message += chr((ord(char) - ord('A') + 4) % 26 + ord('A')).lower()
        else:
            encoded_message += char
    return encoded_message