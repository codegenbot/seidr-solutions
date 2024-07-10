def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            encoded_message += chr((ord(char) - ord('a') + 2) % 26 + ord('a')) if char.islower() else (ord(char) - ord('A') + 2) % 26 + ord('A')
        else:
            encoded_message += char
    return encoded_message