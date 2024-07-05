def encode(message):
    def transform_char(c):
        vowels = 'aeiouAEIOU'
        if c in vowels:
            return chr(ord(c) + 2)
        return c.swapcase()
    
    return ''.join(transform_char(c) for c in message)