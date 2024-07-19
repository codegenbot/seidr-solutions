```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = (ord(char) - 97 + 2) % 26
            result += chr(97 + index)
        else:
            if char.isupper():
                result += char.lower()
            else:
                result += char.upper()
        if not char.isalpha():
            result += char
    return result