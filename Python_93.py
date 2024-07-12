def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.isupper():
                result += chr((ord(char) - 65 + ord('K') - 65) % 26 + 65)
            else:
                result += chr((ord(char) - 97 + ord('k') - 97) % 26 + 97)
        else:
            result += char
    return result