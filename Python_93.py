```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            idx = vowels.index(char)
            new_char = vowels[(idx + 2) % len(vouchers)] if char.islower() else vowels[(idx + 2) % len(vowels)].upper()
        else:
            new_char = char.swapcase()
        result += new_char
    return result