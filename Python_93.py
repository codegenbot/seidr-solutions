def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            is_upper = char.isupper()
            char_lower = char.lower()
            if char_lower in vowels:
                new_char = chr((ord(char_lower) - ord('a') + 3) % 26 + ord('a') + (ord('A') - ord('a')) if is_upper else 0)
            else:
                new_char = char
            encoded_message += new_char
        else:
            encoded_message += char
    return encoded_message