def encode(message):
    encoded_message = ""
    vowels = "aeiou"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char) + 2 - ord("a")) % 26 + ord("a"))
            else:
                encoded_message += (
                    chr((ord(char) + 3 - ord("a")) % 26 + ord("a"))
                    if char.islower()
                    else chr((ord(char) + 1 - ord("a")) % 26 + ord("a")
                )
        else:
            encoded_message += char
    return encoded_message