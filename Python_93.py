def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() == "z":
                encoded_message += "B"
            elif char.lower() == "y":
                encoded_message += "A"
            elif char.lower() in vowels:
                if char.isupper():
                    encoded_message += chr(((ord(char) - ord("A")) + 2) % 26 + ord("A"))
                else:
                    encoded_message += chr(((ord(char) - ord("a")) + 2) % 26 + ord("a"))
            else:
                if char.isupper():
                    encoded_message += chr(((ord(char) - ord("A")) - 1) % 26 + ord("A"))
                else:
                    encoded_message += chr(((ord(char) - ord("a")) - 1) % 26 + ord("a"))
        else:
            encoded_message += char
    return encoded_message