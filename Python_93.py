def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char in vowels:
                encoded_message += char
            else:
                encoded_message += chr((ord(char) - ord('a') + 2) % 26 + ord('a')) if char.islower() else chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
        else:
            encoded_message += char
    return encoded_message