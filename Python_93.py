def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                new_char = chr((ord(char) - ord('A') + 2) % 26 + ord('A'))
            else:
                new_char = chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
        else:
            new_char = char
        result += new_char
    return result