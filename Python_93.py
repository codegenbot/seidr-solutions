def encode(message):
    vowels = 'aeiouAEIOU'
    result = ''
    for char in message:
        if char.isalpha():
            if char in vowels:
                if char.upper() == char:
                    new_char = chr((ord(char) + 2 - ord('a')) % 26 + ord('a'))
                else:
                    new_char = chr((ord(char) - 2 - ord('A')) % 26 + ord('A'))
            else:
                new_char = char.swapcase()
            result += new_char
        else:
            result += char