```python
def encode(message):
    """Shifts alphabetical characters in a message forward by 3 positions"""
    result = ""
    for char in message:
        if char.isalpha():
            if char.lower() in 'aeiou':
                result += chr((ord(char) - 97 + 3) % 26 + 97)
            elif char.isupper():
                result += chr((ord(char) - 65 + 3) % 26 + 65)
            else:
                result += char
        else:
            result += char
    return result