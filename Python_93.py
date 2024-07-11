def encode(message):
    result = ""
    for char in message:
        if not char.isalnum():
            result += char
        else:
            if char.isupper():
                result += chr((ord(char) - ord("A") + 3) % 26 + ord("A"))
            else:
                result += chr((ord(char) - ord("a") + 3) % 26 + ord("a"))