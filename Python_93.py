```
def encode(message):
    vowels = 'aeiou'
    result = ""
    for char in message:
        if not char.isalpha():
            result += char
        elif char.isalpha() and char.upper() in 'AEIOU':
            result += chr(ord('a') + (ord(char) - ord('a')) % 26)
        else:
            result += char.upper()
    return result