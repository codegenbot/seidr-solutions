def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            result += char.upper() if char.isupper() else char.lower()
        else:
            result += char
    return result