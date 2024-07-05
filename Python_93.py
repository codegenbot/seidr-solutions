def encode(message):
    vowels = {
        "a": "A",
        "e": "E",
        "i": "I",
        "o": "O",
        "u": "U",
        "I": "?",
        " ": "",
        "d": "",
    }
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = vowels[char]
            elif char.isupper() and char not in vowels:
                encoded_char = char.lower()
        else:
            if char not in vowels:
                encoded_message += char
    return encoded_message