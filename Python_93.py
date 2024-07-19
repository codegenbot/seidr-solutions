def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            shift = 1
            encoded_char_ord = ((ord(char) - ord('a') + shift) % 26) + ord('a') if char.islower() else ((ord(char) - ord('A') + shift) % 26) + ord('A')
            encoded_message += chr(encoded_char_ord)
        else:
            encoded_message += char
    return encoded_message