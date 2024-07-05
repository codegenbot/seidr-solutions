def encode(message):
    # Use a list comprehension to create a new string with all vowels encoded
    encoded_message = "".join(
        [
            (
                char
                if char not in ["a", "e", "i", "o", "u"]
                else chr((ord(char) - ord("a") + 2) % 26 + ord("A"))
            )
            for char in message
        ]
    )
    return encoded_message