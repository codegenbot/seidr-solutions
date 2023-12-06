
```
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, rotated_alphabet)
    return re.sub(r'[^a-zA-Z]', '', s).translate(table)
```

The code above is a function that takes in a string `s` and performs a simple encryption on it by using the python built-in functions of maketrans() and translate(). The encrypt() function returns the encrypted string. 