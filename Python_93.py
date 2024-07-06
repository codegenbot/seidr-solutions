def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            new_char = chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
            result += new_char
        else:
            result += char
    return result