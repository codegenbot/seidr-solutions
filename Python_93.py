def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in "aeiou":
                result += chr((ord(char.lower()) - 96 + 2) % 26 + 96)
            else:
                result += char.swapcase()
        else:
            result += char
    return result