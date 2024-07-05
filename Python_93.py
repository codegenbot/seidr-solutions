
def encode(message):
    vowels = ["a", "e", "i", "o", "u"]
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_char = chr((ord(char) - ord("a") + 2) % 26 + ord("A"))
            elif char.isupper():
                encoded_char = chr((ord(char) - ord("A") + 2) % 26 + ord("a"))
        else:
            if char in vowels:
                encoded_char = "?"
            else:
                encoded_message += char
    return encoded_message