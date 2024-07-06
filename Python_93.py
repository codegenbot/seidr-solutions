def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            # Shift the letter by 2 positions
            result += chr((ord(char) - ord("A") + 2) % 26)
        else:
            result += char
    return result