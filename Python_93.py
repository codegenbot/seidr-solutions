def encode(message):
    vowels = [chr(ord('a') + i) for i in range(5)]
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = chr((ord(char) - ord('a') + 2) % 26 + ord('A'))
            else:
                encoded_char = chr((ord(char) - ord('A') + 2) % 26 + ord('a'))
        elif char in vowels:
            encoded_char = "?"
        else:
            encoded_message += char
    return encoded_message