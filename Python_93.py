
def encode(message):
    vowels = {"a": "A", "e": "E", "i": "I", "o": "O", "u": "U", "I": "?", " ": "", "D": ""}
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = vowels[char]
            elif char.isupper():
                encoded_char = vowels[char].lower()
        else:
            if char in vowels:
                encoded_char = "?"
            else:
                encoded_message += char
    return encoded_message