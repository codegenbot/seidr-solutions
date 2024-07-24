def encode(message):
    encoded_message = ""
    vowels = "aeiou"
    for char in message:
        if char.isalpha():
            if char.islower():
                encoded_message += chr((ord(char) + 2 - ord("a")) % 26 + ord("a"))
            else:
                encoded_message += chr((ord(char) + 3 - ord("A")) % 26 + ord("A")
        else:
            encoded_message += char
    return encoded_message