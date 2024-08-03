```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - ord('a')
                new_char = chr((index + 2) % 26 + ord('a'))
                result += new_char.upper() if char.isupper() else new_char
            else:
                result += char
        else:
            result += char
    return result