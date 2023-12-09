```
def encode(message):
    vowels = ['a', 'e', 'i', 'o', 'u']
    encoded_message = ''
    char_map = {}
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                encoded_char = chr(ord(char) + 2)
            else:
                encoded_char = char.swapcase()
            char_map[char] = encoded_char
    for char in message:
        if char.isalpha():
            encoded_message += char_map[char]
    return encoded_message
```