```python
def encode(message):
    result = ""
    for char in message:
        if char.isalpha():
            if ('aeiou'.find(char.lower()) != -1):
                result += chr((ord(char) - 97 + 2) % 26 + 97)
            else:
                result += (char.swapcase())
        else:
            result += char
    return result