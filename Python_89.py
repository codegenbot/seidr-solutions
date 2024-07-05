def encrypt(s):
    new_string = ""
    for char in s.lower():
        if char.islower() or char.isupper():
            new_char = chr((ord(char) + 2 - ord("a")) % 26 + ord("a"))
            return new_char
```