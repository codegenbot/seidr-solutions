def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            shift = 3
            base_ord = ord('a') if char.islower() else ord('A')
            encoded_char_ord = ((ord(char) - base_ord + shift) % 26) + base_ord
            encoded_message += chr(encoded_char_ord)
        else:
            if char == " ":
                encoded_message += char
    return encoded_message