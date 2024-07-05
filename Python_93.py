
def encode(message):
    vowels = dict((k.lower(), v.lower()) for k, v in {
        "a": "A",
        "e": "E",
        "i": "I",
        "o": "O",
        "u": "U",
        "I": "?",
        " ": "",
        "d": "",
    }.items())
    encoded_message = ""
    for char in message:
        if char.isalpha():
            encoded_char = vowels[char]
        else:
            encoded_message += char
    return encoded_message