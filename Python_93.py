def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char) - ord(vowels[vowels.index(char.lower())])) % 26 + ord('a'))
            else:
                new_char = 'T' if char.upper() == 'T' else 't'
            result += new_char
        else:
            result += char
    return result