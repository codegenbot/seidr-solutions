def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            # Use the modulo operator to shift the character by 2 positions
            new_char = chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
            result += new_char
        else:
            result += char
    return result