```python
def encrypt(s):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    result = ''
    for char in s:
        if char.isalpha():
            index = alphabet.index(char.lower())
            new_index = (index + 4) % len(alphabet)
            if char.isupper():
                result += alphabet[new_index].upper()
            else:
                result += alphabet[new_index]
        else:
            result += char
    return result