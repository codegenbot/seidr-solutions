def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            four_spaces = "    "
            if char.lower() in vowels:
                index = ord(char.lower()) - 97
                new_char = chr((index + 2) % 26 + 97)
            else:
                new_char = char.swapcase()
            result += new_char
        else:
            if not result or not result[-1].isalpha():
                result += ' '
            result += char
    return result