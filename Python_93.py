def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    result = []
    for letter in message:
        if letter.isalpha():
            if letter.lower() in vowels:
                result.append(chr(ord(letter) + 2))
            else:
                result.append(letter.swapcase())
        else:
            result.append(letter)
    return ''.join(result)