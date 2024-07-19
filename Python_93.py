def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            shift_amount = 5 if char.lower() in "aeiou" else 10
            encoded_message += chr((ord(char.lower()) - ord('a') + shift_amount) % 26 + ord('a')).swapcase()
        else:
            encoded_message += char
    return encoded_message