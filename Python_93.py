def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_message += (
                chr((ord(char.lower()) - ord("a") + 2) % 26 + ord("a")).swapcase()
                if char.islower()
                else chr((ord(char.upper()) - ord("A") + 2) % 26 + ord("A")).swapcase()
            )
        else:
            encoded_message += char  # keep non-alphabetic characters unchanged
    return encoded_message