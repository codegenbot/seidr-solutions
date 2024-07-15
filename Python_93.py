def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char in vowels:
            index = vowels.index(char)
            result += chr((index + 2) % 11 + ord('a')) if char.islower() else chr((index + 2) % 11 + ord('A'))
        elif char.isalpha():
            result += char.swapcase()
        else:
            result += char
    return result