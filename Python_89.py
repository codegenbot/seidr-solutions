```python
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    encrypted_string = ""
    for char in s:
        index = (alphabet.index(char) + 2) % len(alphabet)
        encrypted_string += alphabet[index]
    return encrypted_string
```