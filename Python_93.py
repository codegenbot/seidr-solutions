def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                new_char = chr((ord(char.lower()) + 2 - ord('a')) % 26 + ord('a'))
                if char.isupper():
                    new_char = new_char.upper()
            else:
                new_char = char.swapcase()
            result += new_char
        else:
            result += char
    return result