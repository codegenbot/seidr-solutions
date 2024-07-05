
def encode(message):
    vowels = ["a", "e", "i", "o", "u"]
    encoded_message = ""
    for char in message:
        if char.isalpha():
            shift = ord(char) - ord("a") + 2
            if char.islower():
                shift %= 26
            elif char.isupper():
                shift %= 26
                shift += ord("A")
            else:
                encoded_message += char
        else:
            encoded_message += char
    return encoded_message