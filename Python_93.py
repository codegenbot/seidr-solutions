def encode(message):
    vowels = 'aeiouAEIOU'
    replace_map = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'w',
                   'A': 'C', 'E': 'G', 'I': 'K', 'O': 'Q', 'U': 'W'}
    encoded_message = ''
    for char in message:
        if char in vowels:
            encoded_message += replace_map[char]
        else:
            encoded_message += char.swapcase()
    return encoded_message