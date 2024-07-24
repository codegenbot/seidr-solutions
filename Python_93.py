```
def encode(message):
    result = ""
    if message:
        result += " "
    for char in message[1:]:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - ord("A") + 3) % 26 + ord("A"))
            else:
                result += chr((ord(char) - ord("a") + 3) % 26 + ord("a"))
        else:
            result += char
    return result