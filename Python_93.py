def encode(message):
    return "".join(chr(ord(char) + 2) if char.isalpha() and char.lower() in "aeiou" else char.swapcase() if char.isalpha() else char for char in message)