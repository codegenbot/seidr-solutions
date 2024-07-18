def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr((ord(char.lower()) + 1 - ord('a')) % 26 + ord('a')).upper()
            else:
                encoded_message += char.swapcase()
        elif char.isspace():
            encoded_message += char
    return encoded_message