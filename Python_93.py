def encode(message):
    def transform_char(c):
        vowels = 'aeiouAEIOU'
        if c in vowels:
            if c == 'u':
                return 'a'
            elif c == 'U':
                return 'A'
            else:
                return chr(ord(c) + 2)
        return c.swapcase()
    
    return ''.join(transform_char(c) for c in message)

print(encode("I DoNt KnOw WhAt tO WrItE"))