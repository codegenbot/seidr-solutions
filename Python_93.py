def encode(message):
    vowels = set('aeiou')
    return ''.join([
        char if not char.isalpha()
        else chr(((ord(char.upper()) - ord('A')) % 26) + ord('A')).swapcase()
        if char.lower() not in vowels
        else char.swapcase()
        for char in message
    ])