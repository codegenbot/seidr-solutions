def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char == char.lower():
                    result += chr((ord(char) - 97 + 2) % 26 + 97)
                else:
                    result += char.swapcase()
            else:
                result += chr((ord(char.lower()) - 96 + 1) % 26 + 96).upper() if char.isupper() else chr((ord(char.lower()) - 96 + 1) % 26 + 96)
        else:
            result += char
    return result