def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            shift = 5 if char.lower() in vowels else 10
            encoded_char_ord = ((ord(char.lower()) - ord('a') + shift) % 26 + ord('a'))
            encoded_message += chr(encoded_char_ord).swapcase()
        else:
            encoded_message += char
    return encoded_message