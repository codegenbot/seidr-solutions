def encode(message):
    vowels = ["a", "e", "i", "o", "u"]
    encoded_message = ""
    for char in message.lower():
        if char.isalpha():
            encoded_char = chr((ord(char) - ord("a") + 2) % 26 + ord("A"))
        else:
            if char in vowels:
                encoded_char = "?"
            else:
                encoded_message += char
    return encoded_message