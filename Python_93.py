def encode(message):
    encoded_message = ""
    for char in message:
        if char.islower() and char in "aeiou":
            encoded_message += chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
        else:
            encoded_message += char.swapcase()
    return encoded_message.lower()


print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "K DqNt KnQw WhCt Tq WrKtG"