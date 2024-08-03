Here is the Python solution for the problem:

```
def encode(message):
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() == 'a' or char.lower() == 'e' or char.lower() == 'i' or char.lower() == 'o' or char.lower() == 'u':
                encoded_message += chr((ord(char) - 97 + 2) % 26 + 97)
            elif char.isupper():
                encoded_message += char.lower()
            else:
                encoded_message += char.upper()
        else:
            encoded_message += char
    return encoded_message