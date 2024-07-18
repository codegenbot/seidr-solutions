def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                encoded_message += chr((ord(char.lower()) + 2 - ord('a')) % 26 + ord('a')).swapcase()
            else:
                encoded_message += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a')).swapcase()
        else:
            encoded_message += char  # keep non-alphabetic characters unchanged (including spaces)
    return encoded_message