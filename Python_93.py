```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if ord(char.lower()) - 97 < 5 or ord(char.lower()) - 97 >= 21:
                new_char = chr((ord(char.lower()) + 2) % 26 + 97).swapcase()
            else:
                if char.lower() in vowels:
                    index = ord(char.lower()) - 97
                    new_char = chr((index + 2) % 26 + 97)
                else:
                    new_char = char.swapcase()
            result += new_char
        else:
            result += char
    return result