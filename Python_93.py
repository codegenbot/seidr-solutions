```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char) - ord('a' if char.lower() < 'n' else 'n')) % 26 + ord('a' if char.lower() < 'n' else 'n'))
            else:
                result += char.swapcase()
        else:
            result += char
    return result