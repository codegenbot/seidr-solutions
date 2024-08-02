def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                if char.lower() in 'ie':
                    result += chr((ord(char.lower()) + 1) % 26 + ord('a'))
                else:
                    result += chr((ord(char.lower()) + 2) % 26 + ord('a'))
            else:
                result += char.swapcase()
        else:
            result += char
    return result