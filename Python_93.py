def encode(message):
    vowels = 'aeiouAEIOU'
    vowel_map = {v: chr(ord(v) + 2) for v in vowels}
    return ''.join(vowel_map.get(c, c.swapcase()) for c in message)