```
"""Solve the problem and write a Python function that encodes each vowel in a given message to its corresponding letter two positions forward in the alphabet.
For example, if the input is "Hello", the output will be "HhellO".
The function should work with both lowercase and uppercase letters and leave all non-vowel characters unchanged."""
def encode(message):
    encoded_message = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                index = ord(char.lower()) - 97
                encoded_char = chr((index + 2) % 26 + 97)
                if char.isupper():
                    encoded_char = encoded_char.upper()
                encoded_message += encoded_char
            else:
                if char.isupper():
                    encoded_message += char.lower()
                else:
                    encoded_message += char
        else:
            encoded_message += char
    return encoded_message