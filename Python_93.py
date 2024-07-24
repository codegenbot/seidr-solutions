def encode(message):
    encoded_message = ""
    vowels = "AEIOUaeiou"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr((ord(char) - ord('A') + 3) % 26 + ord('A'))
            else:
                encoded_message += chr((ord(char) - ord('A') + 2) % 26 + ord('A')) if char.islower() else chr((ord(char) - ord('A') - 1) % 26 + ord('A'))
        else:
            encoded_message += char
    return encoded_message