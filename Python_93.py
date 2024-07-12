def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr(ord('a') + (ord(char) - ord('a')) % 26)
            else:
                result += chr(ord('A') + (ord(char) - ord('A')) % 26)
        else:
            result += char
    return result