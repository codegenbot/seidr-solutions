def encode(message):
    vowels = 'aeiou'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif ('AEIOU' + vowels).index(char.upper()) < 3:
            result += chr(ord('a') + (ord(char) - ord('a')) % 26)
        else:
            result += char.upper()
    return result