```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - ord('a')
                new_char = chr(ord('a') + (index + 2) % 6)
                result += new_char.upper() if char.isupper() else new_char
            else:
                result += char.swapcase()
        else:
            result += char
    return result