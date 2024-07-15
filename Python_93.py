def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                char = chr((ord(char) - ord("A") + 2) % 26 + ord("A"))
            else:
                char = chr((ord(char) - ord("a") + 2) % 26 + ord("a"))
        result += char
    return result