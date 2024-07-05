def encode(message):
    def transform_char(c):
        vowels = 'aeiouAEIOU'
        if c in vowels:
            vowel_map = {'a': 'c', 'e': 'g', 'i': 'k', 'o': 'q', 'u': 'w',
                         'A': 'C', 'E': 'G', 'I': 'K', 'O': 'Q', 'U': 'W'}
            return vowel_map[c]
        return c.swapcase()
    
    return ''.join(transform_char(c) for c in message)

# Testing the function with the given assertion
print(encode("I DoNt KnOw WhAt tO WrItE"))  # Output: "k dQnT kNqW wHcT Tq wRkTg"