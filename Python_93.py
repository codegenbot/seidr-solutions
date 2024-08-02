def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            base_ord = ord('a') if char.islower() else ord('A')
            new_char = chr(((ord(char) - base_ord + 2) % 26) + base_ord)
            encoded_message += new_char
        else:
            encoded_message += char

    return encoded_message