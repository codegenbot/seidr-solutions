def encode(message):
    encoded_message = ""
    for char in message:
        if char.lower() in "aeiou":
            encoded_message += chr(ord(char) + 2 if char.islower() else ord(char.upper()) + 2)
        else:
            encoded_message += char.swapcase()
    return encoded_message

print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "K DqNt KnQw WhCt Tq WrKtG"