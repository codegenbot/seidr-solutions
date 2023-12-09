```
import re
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    for char in message:
        if not char.isalpha():
            # If the character is not alphabetic, swap its case
            encoded_char = char.swapcase()
        elif char.lower() in vowels:
            # If the character is a vowel, add 2 to its ASCII code
            encoded_char = chr(ord(char) + 2)
        else:
            # Otherwise, leave the character unchanged
            encoded_char = char
        encoded_message += encoded_char
    return encoded_message
```