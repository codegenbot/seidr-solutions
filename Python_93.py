```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                result += chr((ord(char) + 2 - ord('a' if char.islower() else 'A')) % 26 + (0 if char.islower() else 65))
            else:
                result += char.swapcase()
        else:
            result += char
    return result