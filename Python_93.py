import re

def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in re.sub('[^a-zA-Z]', '', message):
        if char.lower() in vowels:
            index = ord(char.lower()) - 97
            new_char = chr((index + 2) % 26 + 97)
        else:
            new_char = char.swapcase()
        result += new_char
    return result