Here's a modification to your function. This function shifts the letters in the string 's' by 2 positions in the alphabet and wraps around to the beginning of the alphabet if necessary.

```python
def encrypt(s):
    result = ''
    for char in s:
        if char.isalpha():
            ascii_offset = 65 if char.isupper() else 97
            result += chr((ord(char) - ascii_offset + (2 * 2)) % 26 + ascii_offset)
        else:
            result += char
    return result