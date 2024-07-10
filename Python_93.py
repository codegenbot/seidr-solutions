```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = vowels.index(char)
            new_char = chr((index + 2) % 7 * ord('a') + ord('b'))
            result += new_char
        else:
            if char.isupper():
                result += char.lower()
            elif char.islower():
                result += char.upper()
            else:
                result += char
    return result