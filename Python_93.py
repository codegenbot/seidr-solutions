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
                new_char = chr((ord(char.lower()) - 96 + 1) % 26 + 96).upper() if char.isupper() else chr((ord(char.lower()) - 96 + 1) % 26 + 96)
            result += new_char
        else:
            result += char
    return result