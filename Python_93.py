def encode(message):
    vowels = "AEIOUaeiou"
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += char
            else:
                encoded_message += chr(((ord(char.lower()) - ord('a') + 2) % 26) + ord('a')).upper()
        else:
            encoded_message += char
    return encoded_message