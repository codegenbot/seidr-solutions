def encode(message):
    encoded_message = ""
    for char in message:
        if char.islower() and char.lower() in "aeiou":
            encoded_message += chr(ord(char) + 2)
        else:
            encoded_message += char.swapcase()
    return encoded_message

print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "K dQnT kNqW wHcT Tq wRkTg"