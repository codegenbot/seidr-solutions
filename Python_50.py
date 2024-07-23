```
def decode_shift(s: str):
    result = ""
    shift = 5
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in s:
        if char in alphabet:
            position = alphabet.index(char)
            new_position = (position - shift) % 26
            result += alphabet[new_position]
        else:
            result += char
    return result