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
                new_char = chr((ord(char.lower()) - 65 + 1) % 26 + 65) if char.isupper() else chr((ord(char.lower()) - 97 + 1) % 26 + 97)
            result += new_char
        else:
            result += char
    return result