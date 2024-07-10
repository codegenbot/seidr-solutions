def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha() and char not in vowels:
            shift_amount = 2
            if char.isupper():
                offset = ord('A')
            else:
                offset = ord('a')
            encoded_char = chr((ord(char) - offset + shift_amount) % 26 + offset)
            encoded_message += encoded_char
        else:
            encoded_message += char
    return encoded_message