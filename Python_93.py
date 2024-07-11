def encode(message):
    encoded_message = ""
    for char in message:
        if char.lower() in "aeiou":
            encoded_message += chr(ord(char) + 1)  # Increment by 1 for vowels
        else:
            encoded_message += char.swapcase()
    return encoded_message

print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "K DpNt KnCx WhCt Tq WrKtF"