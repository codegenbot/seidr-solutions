def encode(message):
    vowels = {"a": "A", "e": "E", "i": "I", "o": "O", "u": "U", "I": "?", " ": ""}
    encoded_message = ""
    for char in message:
        if char.isalpha() and char in vowels:
            if char.islower():
                encoded_char = vowels[char]
            elif char.isupper():
                encoded_char = vowels[char].lower()
            else:
                encoded_message += char
        return encoded_message