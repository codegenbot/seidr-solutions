```python
def encode(message):
    vowels = "aeiouAEIOU"
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in vowels:
                new_char = chr((ord(char.lower()) - 97 + 3) % 26 + 97)
            else:
                new_char = chr((ord(char.lower()) - 65 + 3) % 26 + 65)
            result += new_char
        else:
            result += char
    return result