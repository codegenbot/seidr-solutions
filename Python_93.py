def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                idx = vowels.index(char.upper())
                new_char = chr((ord(vowels[idx + 2]) - ord('a') + ord('A')) % 26 + ord('A'))
                result += new_char
            else:
                result += char.swapcase()
        else:
            result += char
    return result