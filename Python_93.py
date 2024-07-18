def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                encoded_message += chr((ord(char.lower()) + 2 - ord('a')) % 26 + ord('a')).swapcase()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char  # keep non-alphabetic and spaces characters unchanged
    return encoded_message