```
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, rotated_alphabet)
    return re.sub(r'[^a-zA-Z]', '', s).translate(table)
```
This is the correct code for the problem described. It takes a string `s` as input and returns an encrypted version of it using the Caesar cipher with a shift of 2. The function first creates a translation table that maps each letter to its corresponding rotated letter, then uses regular expressions to remove any non-alphabetic characters from the input string and finally applies the translation table to the remaining letters.