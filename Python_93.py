def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou' and char.islower():
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                result += char.swapcase()
        else:
            result += char
    return result