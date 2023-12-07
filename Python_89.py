```
def encrypt(s):
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    rotated_alphabet = alphabet[2:] + alphabet[:2]
    table = str.maketrans(alphabet, rotated_alphabet)
    return re.sub(r'[^a-zA-Z]', '', s).translate(table)
```
The code you provided has an indentation error on line 6. To fix this error, all the lines of code inside the `encrypt` function must be indented by four spaces. I have corrected the code for you.