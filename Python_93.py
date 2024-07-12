def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(vowels[vowels.index(char.lower())]) - 97
                new_char = chr((index + 2) % 26 + 97)
            else:
                if char.isupper():
                    new_char = 'T'
                else:
                    new_char = 't'
            result += new_char
        else:
            result += char
    return result