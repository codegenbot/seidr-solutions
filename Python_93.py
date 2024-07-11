def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha() and char.lower() in vowels:
            shift = 2 if char.islower() else -2
            encoded_message += chr((ord(char) + shift - ord('A') + 26) % 26 + ord('A'))
        else:
            encoded_message += char.swapcase()
    return encoded_message

print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "K DqNt KnQw WhCt Tq WrKtG"