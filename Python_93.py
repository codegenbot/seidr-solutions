def encode(message):
    vowels = set('aeiouAEIOU')
    return ''.join([
        char if not char.isalpha() else chr(ord(char) + 2).swapcase() if char.lower() not in vowels
        else char.swapcase()
        for char in message
    ])