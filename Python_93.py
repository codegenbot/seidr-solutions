```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = (ord(char) - ord('a') + 2) % 26
            result += chr(ord('a') + index)
        else:
            if char.isupper():
                result += 'T' if char == 't' else 'G'
            else:
                result += 't' if char == 'T' else 'g'
        result += char
    return result