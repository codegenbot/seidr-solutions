```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if ord(char.lower()) - 97 < 5 or ord(char.lower()) - 97 >= 21:
                new_char = char.swapcase()
            else:
                index = ord(char.lower()) - 97
                new_char = chr((index + 2) % 26 + 97)
            result += new_char
        else:
            result += char
    return result