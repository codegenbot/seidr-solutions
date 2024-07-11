```python
def encode(message):
    vowels = 'aeiouAEIOU'
    encoded_message = ''
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                shift = 2 if char.islower() else 3
                index = (ord(char.lower()) - ord('a') + shift) % 26
                encoded_char = chr(ord('a') + index)
                encoded_message += encoded_char.upper() if char.isupper() else encoded_char
            else:
                encoded_message += ('v' if char.islower() else 'V')
        else:
            encoded_message += char
    return encoded_message