def encode(message):
    encoded_message = ""
    for char in message:
        if char.lower() in "aeiou":
            encoded_message += chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
        else:
            encoded_message += chr((ord(char) - ord('a') + 2) % 26 + ord('a')).swapcase()
    return encoded_message

print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "k Dqnt Knqw Whct tq Wrktg"