def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr(ord('a') + (ord(char) - ord('a')) % 26)
            else:
                result += chr((ord(char.upper()) - ord('A')) % 26) if char.isupper() else ''
        else:
            while not result[-1].isalpha():
                result += char
    return result