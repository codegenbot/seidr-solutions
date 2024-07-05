def encode(message):
    vowels = {"a": "A", "e": "E", "i": "I", "o": "O", "u": "U"}
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = vowels[char.lower()]
                if char.isupper():
                    encoded_char = encoded_char.lower()
                encoded_message += encoded_char
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message