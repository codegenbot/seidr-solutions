def encode(message):
    vowels = 'aeiouAEIOU'
    vowel_shift = {v: chr(ord(v) + 2) for v in vowels}
    return ''.join(vowel_shift.get(c, c).swapcase() for c in message)