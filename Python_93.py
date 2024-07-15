def encode(message):
    vowels = 'aeiouAEIOU'
    return ''.join([chr(ord(char) + 2) if char.isalpha() and char.lower() in vowels else char.swapcase() if char.isalpha() and char.islower() else char for char in message])