def encode(message):
    def transform_char(c):
        if c in 'aeiou':
            if c == 'u':
                return 'a'
            else:
                return chr(ord(c) + 2)
        elif c in 'AEIOU':
            if c == 'U':
                return 'A'
            else:
                return chr(ord(c) + 2)
        return c.swapcase()
    
    return ''.join(transform_char(c) for c in message)

print(encode("I DoNt KnOw WhAt tO WrItE"))  # This should output "k dQnT kNqW wHcT Tq wRkTg"