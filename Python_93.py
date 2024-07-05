def encode(message):
    vowels = "aeiouAEIOU"
    replacement = "cgCG"
    def transform(char):
        if char in vowels:
            idx = (vowels.index(char) + 2) % len(vowels)
            return vowels[idx]
        return char.swapcase()
    
    return ''.join(transform(c) for c in message)