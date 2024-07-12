def encode(message):
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        else:
            if 'aeiou'.index(char.lower()) < 3:
                result += chr(ord('a') + (ord(char) - ord('a')) % 26)
            else:
                result += char.upper()
    return result