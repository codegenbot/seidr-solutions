def encode(message):
    vowels = 'aeiouAEIOU'
    shift_vowels = 'cgkqwCGKQW'
    trans_table = str.maketrans(vowels, shift_vowels)
    
    return message.translate(trans_table).swapcase()