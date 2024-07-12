def encode(message):
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char.lower() in 'aeiou':
            result += chr(ord('a') + (ord(char) - ord('a')) % 26)
        else:
            result += char.upper()
    return result