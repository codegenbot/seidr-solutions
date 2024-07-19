def encode(message):
    encoded_message = ""
    vowels = "aeiouAEIOU"
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_message += chr((ord(char.lower()) - ord('a') + 2) % 26 + ord('a'))
            else:
                encoded_message += char.swapcase()
        else:
            encoded_message += char
    return encoded_message

# Test the function with the given test case
assert encode("I DoNt KnOw WhAt tO WrItE") == "k dQnT kNqW wHcT Tq wRkTg"