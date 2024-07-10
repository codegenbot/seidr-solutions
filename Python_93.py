```python
def encode(message):
    """Shifts alphabetical characters in the message to the right by three positions."""
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