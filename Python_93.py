def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            is_upper = char.isupper()
            char_lower = char.lower()
            if char_lower in "aeiouAEIOU":
                new_char = chr((ord(char_lower) - ord('a') + 5) % 10 + ord('a'))
            else:
                new_char = chr((ord(char_lower) - ord('a') + 26 - 2 * (ord(char_lower) - ord('a'))) % 26 + ord('a'))
            if is_upper:
                new_char = new_char.upper()
        else:
            new_char = char
        
        encoded_message += new_char
    
    return encoded_message