```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            if ord(char) < 97: # ASCII value of 'a' is 97
                result += chr(ord(char) + 3)
            else:
                result += chr(ord(char) + 2)
        elif char.isalpha():
            if char.isupper():
                result += char.swapcase()
            else:
                result += char.upper()
        else:
            result += char
    return result