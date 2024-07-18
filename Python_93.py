def encode(message):
    encoded_message = ""
    for char in message:
        encoded_message += chr((ord(char.lower()) + 2 - ord('a')) % 26 + ord('a')).upper() if char.islower() else chr((ord(char.lower()) + 2 - ord('a')) % 26 + ord('a')).lower()
    return encoded_message