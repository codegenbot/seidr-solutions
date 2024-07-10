def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            is_upper = char.isupper()
            char_lower = char.lower()
            if char_lower in vowels:
                new_char = chr((ord(char_lower) - ord('a') + 4) % 26 + ord('a'))
            else:
                new_char = chr((ord(char_lower) - ord('a') + 3) % 26 + ord('a')).upper() if is_upper else chr((ord(char_lower) - ord('a') + 3) % 26 + ord('a'))
        else:
            new_char = char
        encoded_message += new_char
    return encoded_message