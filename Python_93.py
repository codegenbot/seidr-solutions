def encode(message):
    vowels = 'aeiouAEIOU'
    return ''.join([chr(ord(char) + 2) if char.isalpha() and char.lower() in vowels else char.swapcase() if char.isalpha() else char if char != ' ' else ' ' for char in message])