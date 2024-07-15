def encode(message):
    vowels = set('aeiou')
    return ''.join([
        char if not char.isalpha() or char.lower() in vowels
        else chr(((ord(char.upper()) - ord('A') + 2) % 26) + ord('A')).swapcase()
        if char.lower() not in vowels
        else chr(ord(char) ^ 32)
        for char in message
    ])