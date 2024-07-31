```
def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char) + 2 - ord('a' if char.islower() else 'A')) % 26 + ord('a' if char.islower() else 'A'))
            else:
                new_char = char.swapcase()
        else:
            new_char = char
        result += new_char
    return result