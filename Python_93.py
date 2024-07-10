def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char in vowels or char == " ":
            encoded_message += char
        elif char.isupper():
            encoded_message += chr((ord(char) - ord('A') + 4) % 26 + ord('A'))
        elif char.islower():
            encoded_message += chr((ord(char) - ord('a') + 4) % 26 + ord('a'))
        else:
            encoded_message += char
    return encoded_message