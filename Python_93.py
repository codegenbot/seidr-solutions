```
def encode(message):
    vowels = 'aeiouAEIOU'
    translated_message = ''
    for char in message:
        if char.isalpha():
            if char.upper() in vowels:
                translated_char = chr(((ord(char.upper()) - ord('A') + 2) % 26) + ord('A'))
            else:
                translated_char = char.swapcase()
            translated_message += translated_char
        else:
            translated_message += char
    return translated_message