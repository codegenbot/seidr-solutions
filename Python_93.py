def encode(message):
    vowels = "aeiouAEIOU"
    encoded_message = ""

    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char) - ord("A") + 1) % 26 + ord("A"))
            else:
                encoded_message += chr((ord(char) - ord("A") + 2) % 26 + ord("A")
        else:
            encoded_message += char

    return encoded_message