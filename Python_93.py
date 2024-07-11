```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - 97
                new_char = chr((index + 2) % 26 + 97)
            else:
                new_index = (ord(char.lower()) - 97) % 26
                if new_index < 3 or new_index > 18:
                    new_char = char.swapcase()
                else:
                    index = ord(char.lower()) - 3
                    new_char = chr((index + 2) % 26 + 97)
            result += new_char
        else:
            result += char
    return result