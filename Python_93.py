```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = (ord(char) - ord('a') + 2) % 26
                new_char = chr(ord('a') + index)
            else:
                new_char = char.swapcase()
            result += new_char
        else:
            result += char
    return result