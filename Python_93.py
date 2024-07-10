def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            new_char = char
            is_upper = char.isupper()
            char_lower = char.lower()
            if char_lower in vowels:
                new_char = chr((ord(char_lower) - ord('a') + 4) % 26 + ord('a'))
            if is_upper:
                new_char = new_char.upper()
            else:
                new_char = new_char.lower()
        encoded_message += new_char
    return encoded_message