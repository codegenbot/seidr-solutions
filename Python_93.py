def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char.lower()) + 1 - ord('a')) % 26 + ord('a')).lower()
            else:
                encoded_message += char.swapcase()
        elif char == ' ':
            encoded_message += ' '
        else:
            encoded_message += char
    return encoded_message