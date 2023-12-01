def encode(message):
    encoded_message = "".join(chr(ord(letter) + 2) if letter.isalpha() and letter.lower() in 'aeiou' else letter.swapcase() if letter.isalpha() else letter for letter in message)
    return encoded_message