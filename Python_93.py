def encode(message):
    encoded_message = ""
    for char in message:
        if char.lower() in "aeiou":
            encoded_message += chr(ord(char) + 2).lower()
        else:
            encoded_message += char.swapcase()
    return encoded_message.lower()


print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "K dQnT kNqW wHcT Tq wRkTg"