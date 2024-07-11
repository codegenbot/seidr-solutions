def encode(message):
    encoded_message = ""
    for char in message:
        if char.lower() in "aeiou":
            encoded_char = chr(ord(char) + 2)
            if char.islower():
                encoded_char = encoded_char.lower()
            else:
                encoded_char = encoded_char.upper()
            encoded_message += encoded_char
        else:
            encoded_message += char.swapcase()
    return encoded_message


print(encode("I DoNt KnOw WhAt tO WrItE"))