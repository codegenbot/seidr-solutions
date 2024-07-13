```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            pos = ord(char) - ord('a')
            new_pos = (pos + 2) % 5
            new_char = chr(ord('a') + new_pos)
            result += new_char
        else:
            result += char.swapcase()
    return result