def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.islower():
                result += chr(ord("A") + ord(char) - ord("a"))
            else:
                result += chr(ord("a") + ord(char) - ord("A"))
        else:
            result += char
    return result