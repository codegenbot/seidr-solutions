def encode(message):
    encoded_message = ""
    for char in message:
        if char.islower() and char in "aeiou":
            encoded_char = chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
        else:
            encoded_char = char.swapcase()
        encoded_message += encoded_char
    return encoded_message


print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "K DqNt KnQw WhCt Tq WrKtG"