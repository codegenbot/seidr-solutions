def encode(message):
    vowel_map = {"a": "c", "e": "g", "i": "k", "o": "m", "u": "q"}
    encoded_message = ""
    for char in message:
        char = char.lower()
        if char in vowel_map:
            encoded_message += vowel_map[char]
        else:
            encoded_message += char
    return encoded_message