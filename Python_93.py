I removed the leading backticks (`) from the code, which are meant for marking the code block but are not part of the Python syntax. Here is the corrected code:

```Python
def encode(message):
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