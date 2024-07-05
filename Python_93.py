def encode(message):
    def transform_char(c):
        if c in 'aeiou':
            return chr(ord('a') + (ord(c) - ord('a') + 2) % 26)
        elif c in 'AEIOU':
            return chr(ord('A') + (ord(c) - ord('A') + 2) % 26)
        return c.swapcase()
    
    return ''.join(transform_char(c) for c in message)

# Example use case
print(encode("I DoNt KnOw WhAt tO WrItE"))  # This should output "k dQnT kNqW wHcT Tq wRkTg"