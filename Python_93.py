def encode(message):
    def swap_case_and_replace_vowel(char):
        vowels = 'aeiouAEIOU'
        replacements = 'cgkqwCGKQW'
        char = char.swapcase()
        if char in vowels:
            return replacements[vowels.index(char)]
        return char

    return ''.join(swap_case_and_replace_vowel(c) for c in message)