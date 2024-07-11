def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                index = ord(char.lower()) - 97
                new_char = chr((index + 2) % 26 + 97)
            else:
                new_char = char.swapcase()
        else: 
            # Check for non-alphanumeric characters
            new_char = char
        result += new_char
    return result