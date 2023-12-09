```
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    consonants = [c for c in string.ascii_lowercase if c not in vowels]
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = string.translate(char, str.maketrans(consonants, consonants[::-1]))
            encoded_message += encoded_char
    return encoded_message
```