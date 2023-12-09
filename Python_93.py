def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    consonants = [chr(i) for i in range(97, 123) if chr(i) not in vowels]
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr(ord(char) + 2)
            elif char.lower() in consonants:
                encoded_char = char.swapcase()
            else:
                encoded_char = char
            encoded_message += encoded_char
    return encoded_message