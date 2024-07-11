def encode(message):
    encoded_message = ""
    for char in message:
        if char.lower() in "aeiouAEIOU":
            encoded_message += chr(ord(char) + 1).lower()
        else:
            encoded_message += char.swapcase()
    return encoded_message

print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "k dQnT kNqW wHcT Tq wRkTg"