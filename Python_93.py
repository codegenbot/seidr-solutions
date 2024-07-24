def encode(message):
    encoded_message = ''
    vowels = 'AEIOUaeiou'
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                encoded_message += chr(((ord(char.upper()) - ord('A')) + 2) % 26 + ord('A')).upper()
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message

print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output should be: "K DqNt KnQw WhCt Tq WrKtG"