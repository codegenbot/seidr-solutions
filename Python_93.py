def encode(message):
    encoded_message = ""

    for char in message:
        if char.isalpha():
            char_code = ord(char)
            increment = 2 if char.lower() in "aeiou" else 3
            alpha_sign = 'a' if char.islower() else 'A'
            new_code = char_code + (increment * (1 if char.islower() else -1))
            encoded_message += chr(new_code - ord(alpha_sign) + ord('a'))
        else:
            encoded_message += char.lower()

    return encoded_message