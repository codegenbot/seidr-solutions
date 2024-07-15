```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char) - ord('a') + 2) % 26 + ord('a'))
                result += new_char.upper() if char.isupper() else new_char
            else:
                result += char.swapcase()
        else:
            result += char
    return result