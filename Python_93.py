def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            index = (ord(char.lower()) - 97) % 26
            if char.lower() in vowels:
                result += chr((index + 2) % 26 + 97)
            else:
                result += char.swapcase()
        else:
            result += char
    return result